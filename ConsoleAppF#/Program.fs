open System

let today = DateTime.Now

let birthday = DateOnly.Parse("25/12/1961")

printfn "%s" (birthday.ToString("MMMM dd, yyyy"))

printfn "Today full format: %O" today
printfn "Today just date: %O" today.Date
printfn "Birthday full format: %O" birthday
