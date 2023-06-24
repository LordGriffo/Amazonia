with Ada.Text_IO;

procedure Main is
   Num1, Num2, Soma, Subtracao, Multi, Div, Res : Integer;
begin
   Ada.Text_IO.Put("Digite o Primeiro Numero: ");
   Ada.Text_IO.Get(Num1);

   Ada.Text_IO.Put("Digite o Segundo Numero: ");
   Ada.Text_IO.Get(Num2);

   Soma := Num1 + Num2;
   Subtracao := Num1 - Num2;
   Multi := Num1 * Num2;
   Div := Num1 / Num2;
   Res := Num1 mod Num2;

   Ada.Text_IO.Put_Line("+ : " & Soma'Image);
   Ada.Text_IO.Put_Line("- : " & Subtracao'Image);
   Ada.Text_IO.Put_Line("* : " & Multi'Image);
   Ada.Text_IO.Put_Line("/ : " & Div'Image);
   Ada.Text_IO.Put_Line("% : " & Res'Image);
end Main;
