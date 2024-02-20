using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Reading_Data_From_DB_To_Class;

public class Books {

    public int Id { get; set; }
    public string? Name { get; set; }
    public int Pages { get; set; }
    public int YearPress { get; set; }
    public int Id_Themes { get; set; }
    public int Id_Category { get; set; }
    public int Id_Author { get; set; }
    public int Id_Press { get; set; }
    public string? Comment { get; set; }
    public int Quantity { get; set; }

    public Books(int id, string? name, int pages, int yearpress, int id_themes, int id_category, int id_author, int id_press, string? comment, int quantity) {
        Id = id;
        Name = name;
        Pages = pages;
        YearPress = yearpress;
        Id_Themes = id_themes;
        Id_Category = id_category;
        Id_Author = id_author;
        Id_Press = id_press;    
        Comment = comment;
        Quantity = quantity;
    }
}