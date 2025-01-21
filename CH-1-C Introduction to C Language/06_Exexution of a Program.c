/*
-------------------------------------------------------Execution of a program-------------------------------------------------------------

Our program or software is an exe file stored somewhere in our hard drive. We double click on it to execute program.  

1. The very first step, it loads into the RAM. 
2. Operating System allocates memory for your program in the RAM. 
3. First instruction (sequence of 0s and 1s of fixed length) is read and taken to processor. 
4. Instruction is stored in instruction register in processor’s memory unit. 
5. Control unit decode instruction and give a signal accordingly to the ALU to perform task.
6. ALU is Arithmetic and Logical Unit.
7. ALU is a circuit responsible to perform all kind of arithmetic and logical operations. 
8. ALU performs the instruction. 
9. Again second instruction from program file (in RAM) is taken to the instruction register and same procedure is repeated. 
10. Once all the instructions are executed, process completes.

NOTE:

1. Agar hume kisi ko software dena hai to hum apne customer/client ko kya denge?
Hum denge ek exe file yaani exe file hi hmara software hai.

2. Ab vo software chalayega kese? toh sabse phle jo humne use file di hai that is exe file or ye file usne apni computer ki hard disk mein
store kar li yaani usne apne computer mein save kar li.

3. Ab jab vo is program ko chalana chahta hai to us file par krega double click to jaise hi ispe double click krega iski ek copy bnegi aur 
vo copy load hogi RAM mein jab bhi koi program start hota hai to sabse phle vo RAM mein store hota hai.
koi bhi program RAM mein load hue bina run nhi hota yaani saare active programs RAM ke andar hain.

4. Hard disk se sirf is program ki copy aati hai kyunki RAM ek volatile memory hai agr RAM ke andar se koi data vanish out hota hai to hard 
disk ke andar vo data preserve rhega RAM ke andar jo bhut saare programs jo active hain unko memory mili hui hai aur ho sakta hai kuch 
memory area khaali ho ye OS ki zimmemdari hai ki hmare program ko chlne ke liye memory ka allocation krvaaye isi ko hum khte hain 
Memory management.

5. Ek baar hmare program ko memory mil jaaye toh ab hmare program ke instructions ka execution hona start ho jaayega.

6. Hmare program mein kya hai bhut saari instructions 16 bit ke architecture ke hisab se hmare is program ke andar bhut saare 0,1 mein jo 
phle 16 0,1 hain vo phli intructions hain isi tarah se agle 16 0,1 doosri instructions hai aur ek ke baad ek bhut saari instructions hmare is 
program mein likhi hui hain toh ek intructions ka size fix hai 16 Bits.

7. Ab ye instructions kese execute hongi toh phli instructions hmare program ki ye jaayegi Processor ke paas processor ke andar hota hai 
memory unit(MU) jha par bhut sare chote chote memory device hote hain ye memory device Registers khlaate hain in registers mein ek hota hai 
instruction register jismein instruction jaake store ho jaayegi.

8. Ab 16 bit Architecture ke hisab se jo processor ke andar instruction register hota hai vo bhi 16 bit ka hi hota hai ye 16 bit 16 0,1 
isi mein likha hai kya karna hai computer ko.

9. Control Unit ek circuit hai processor ke andar jiska ka kaam is instruction ko padhna aur decode krna,samjna ki kya meaning hai to vo 
ALU ko signal dega ki abhi tumko ye kaam krna hai yaani ALU jo bhut saare tarike ke calculations krta hai.

10. ALU hi vo circuit hai hmare processor ke andar jo har tarike ka calculation perform krta hai ab ALU apni marzi se kuch nhi krega 
control unit usse jaisa bolega vaisa krega.

* MU(Memory Unit) = Set of Registers.
* CU(Control Unit) = Circuit that Reads Instructions and decode it.
* ALU(Arithmetic Logic UNIT) = Responsible for all Arithmetic and Logical Calculations.

*/