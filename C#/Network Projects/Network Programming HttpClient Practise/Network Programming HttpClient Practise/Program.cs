using System.Net;
using System.Reflection.Metadata;
using System.Text;

namespace Network_Programming_HttpClient_Practise {
    internal class Program {
        static void Main(string[] args) {

            WebServer webServer = new(27001);
            webServer.Run();
        }
    }


    class WebServer {
        int _port;
        HttpListener _listener;

        public WebServer(int port) {
            _port = port;
        }

        public void Run() {
            _listener = new HttpListener();
            _listener.Prefixes.Add($@"http://localhost:{_port}/");

            _listener.Start();
            Console.WriteLine("Http Listener Started . . .");

            while (true) {

                var context = _listener.GetContext();

                Task.Run(() => {
                    HandleRequest(context);
                });
            }
        }

        private void HandleRequest(HttpListenerContext context) {

            var request = context.Request;
            var response = context.Response; // empty

            var path = request.RawUrl.Split('/').Last().Replace("%20", " ");

            try {
                if (Path.HasExtension(path)) {
                    if (Path.GetExtension(path) == ".jpeg")
                        response.Headers.Add("Content-type", "image/jpeg");
                    else if (Path.GetExtension(path) == ".jpg")
                        response.Headers.Add("Content-type", "image/jpg");

                    var fullPath = "C:\\Users\\hasan\\source\\repos\\Network Programming HttpClient Practise\\Network Programming HttpClient Practise\\Images\\" + path;

                    if (File.Exists(fullPath)) {
                        var bytes = File.ReadAllBytes(fullPath);
                        response.OutputStream.Write(bytes, 0, bytes.Length);
                    }
                }
                else {
                    Console.WriteLine(request.RawUrl.Split('/').Last());
                    Console.WriteLine(request.RawUrl.Split('/')[0].ToLower());
                    if (request.RawUrl.Split('/').Last() == "Home" || request.RawUrl.Split('/').Last() == "Dashboard" || request.RawUrl.Split('/').Last() == "page") {
                        var fullpath = "";
                        if (request.RawUrl.Split('/').Last() != "page") fullpath = $"C:\\Users\\hasan\\source\\repos\\Network Programming HttpClient Practise\\Network Programming HttpClient Practise\\Views\\{request.RawUrl.Split('/').Last().ToLower()}.html";
                        else fullpath = $"C:\\Users\\hasan\\source\\repos\\Network Programming HttpClient Practise\\Network Programming HttpClient Practise\\Views\\{request.RawUrl.Split('/')[2].ToLower()}.html";
                        string htmlContent = "";
                        try {
                            htmlContent = File.ReadAllText(fullpath);
                        }
                        catch (IOException ex) {
                            Console.WriteLine($"Error reading HTML file: {ex.Message}");
                            response.StatusCode = (int)HttpStatusCode.InternalServerError;
                        }
                        response.Headers.Add("Content-type", "text/html");
                        byte[] buffer = Encoding.UTF8.GetBytes(htmlContent);

                        // Write the response data to the output stream
                        response.ContentLength64 = buffer.Length;
                        Stream output = response.OutputStream;
                        output.Write(buffer, 0, buffer.Length);
                        output.Close();
                    }
                    else {
                        response.StatusCode = (int)HttpStatusCode.NotFound;
                        response.StatusDescription = "Image was not found!";
                        response.Headers.Add("Content-type", "text/plain");
                        var msg = response.StatusCode + "\n" + response.StatusDescription;
                        byte[] buffer = Encoding.UTF8.GetBytes(msg);
                        response.ContentLength64 = buffer.Length;
                        Stream output = response.OutputStream;
                        output.Write(buffer, 0, buffer.Length);
                    }
                }
            }
            catch (Exception ex) {
                Console.WriteLine(ex.Message);
            }
            finally {
                response.OutputStream.Close();
            }
        }
    }
}