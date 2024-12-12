Imports System

Module Program
    Sub Main(args As String())
        Dim today As DateTime = DateTime.Now

        Dim birthday As DateOnly = DateOnly.Parse("25/12/1961")

        Console.WriteLine(birthday.ToString("MMMM dd, yyyy"))

        Console.WriteLine($"Today full format: {today}")
        Console.WriteLine($"Today just date: {today.Date}")
        Console.WriteLine($"Birthday full format: {birthday}")

    End Sub
End Module
