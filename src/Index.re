[%raw "require('isomorphic-fetch')"];

open Discord;
open Js.Promise;
let token = "NTM3MDk1NzMxNTQzMjc3NTY4.Dzcrjw.VnyTD27MuFeQRI85dCKRrEHa4sc";
let botName = "ReasonBot";
let client = Client.make();
let login =
  Client.login(token, client)
  |> then_(info => print_endline("Logged in as " ++ botName) |> resolve)
  |> catch(err => Js.log2("Error: ", err) |> resolve);

/** Setup client to handle onReady */
Client.onReady(() => print_endline("ready"), client);