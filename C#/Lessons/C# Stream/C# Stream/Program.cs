using System.IO;
using System.Text;
using static System.IO.FileMode;

namespace Stream {
    internal class Program {
        static void Main() {
            //FileStream file = new("C:\\Users\\hasan\\Downloads\\Task.txt", Create, FileAccess.Write);

            //string str = "Hakuna Matata";
            //var buffer = Encoding.Default.GetBytes(str);

            //file.Write(buffer, 0, buffer.Length);

            //// file.Flush(); // Save etmek ucundur.
            //file.Close(); // Save edib baglamaq ucundur.
            //file.Dispose(); // File'i garbage collector'a emr verir ki heapden silsin.

            //using (FileStream stream = new("C:\\Users\\hasan\\Downloads\\Task.txt", Create, FileAccess.Write)) {
            //    stream.Write(buffer, 0, buffer.Length);
            //}

            //using FileStream folder = new("C:\\Users\\hasan\\Downloads\\Task.txt", Create, FileAccess.Write);
            //folder.Write(buffer, 0, buffer.Length);

            // Read Process

            //using var read = new FileStream("C:\\Users\\hasan\\Downloads\\Task.txt", Open, FileAccess.Read);

            //byte[] buff = new byte[read.Length];
            //read.Read(buff, 0, buff.Length);
            //var strin = Encoding.Default.GetString(buff);

            //Console.WriteLine("strin");
        }
    }
}