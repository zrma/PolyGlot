-module(shop).
-author("zrma").

%% API
%% -export([cost/1]).
-compile(export_all).

cost(oranges) -> 5;
cost(newspaper) -> 8;
cost(apples) -> 2;
cost(pears) -> 9;
cost(milk) -> 7.
