#ifndef UTILITIES_H_INCLUDED
#define UTILITIES_H_INCLUDED

#define set_bit(Reg,Bitno) Reg|= 1<<Bitno
#define clr_bit(Reg,Bitno) Reg&= ~(1<<Bitno)
#define tog_bit(Reg,Bitno) Reg^= 1<<Bitno
#define Get_bit(Reg,Bitno) Reg>>Bitno &1



#endif // UTILITIES_H_INCLUDED
