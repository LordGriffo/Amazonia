const std = @import("std");

pub fn main() !void {
    var allocator = std.heap.page_allocator;
    defer allocator.deinit();

    var stdin = std.io.getStdIn().reader();
    var stdout = std.io.getStdOut().writer();

    var num1: i32 = 0;
    var num2: i32 = 0;
    var soma: i32 = 0;
    var subtracao: i32 = 0;
    var multi: i32 = 0;
    var div: i32 = 0;
    var res: i32 = 0;

    try stdout.print("Digite o Primeiro Numero: ");
    try stdin.readInt(&num1);

    try stdout.print("Digite o Segundo Numero: ");
    try stdin.readInt(&num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;
    res = num1 % num2;

    try stdout.print("+: {}\n", .{soma});
    try stdout.print("-: {}\n", .{subtracao});
    try stdout.print("*: {}\n", .{multi});
    try stdout.print("/: {}\n", .{div});
    try stdout.print("%: {}\n", .{res});
}
