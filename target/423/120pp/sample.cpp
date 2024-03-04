int fac(unsigned n)
{
   return !n ? 1 : n*fac(n-1);
}
