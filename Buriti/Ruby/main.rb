class StdClass
	def initialize
       print "Digite o Primeiro Numero: "
num1 = gets.chomp.to_i
       print "Digite o Segundo Numero: "
num2 = gets.chomp.to_i


    puts "Soma : #{num1 + num2}"
    puts "Sub  : #{num1 - num2}"
    puts "Multi: #{num1 * num2}"
    puts "Div  : #{num1 / num2}"
    puts "Res  : #{num1 % num2}"
	end
end

x = StdClass.new

