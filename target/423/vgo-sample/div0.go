package main
void main()
{
   double dc, dd
   int i, i2

   write( "enter a number: " )
   dc = read()
   dd = 5.3 / dc
   write( dd )
   write( "\nnow, for integers")

   write( "enter a number: " )
   i = read()
   i2 = 5.3 / i
   write( i2 )
   write( "that's all folks")
}