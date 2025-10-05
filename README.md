<p align="center">
    <img src="https://www.42porto.com/wp-content/uploads/2024/08/42-Porto-Horizontal.png"/>
</p>
<h1 align="center">CPP Module 01</h1>
<p align="center">
    <img src="https://github.com/user-attachments/assets/123c3d97-b5e6-4227-9891-3de007036138"/>
</p>

## Summary

<details>
<summary><b>Ex00 - BraiiiiiiinnnzzzZ </b></summary>
    <p> The goal of this exercise is to create a class (Zombie) and then create objects of this class, allocating memory on the stack or on the heap using <b>new</b>. With this, we should understand that objects created on the stack are only available within the scope in which they were created. On the other hand, objects created on the heap can be used outside of the scope where they were created.
    In the case where memory is being allocated on the <b>heap</b>, we need to use delete at the end of the program execution to avoid <b>memory leaks</b>.
    </p>
    <b>Create an object by allocating memory on the heap</b>
    <img width="888" height="330" alt="Image" src="https://github.com/user-attachments/assets/35b32d9d-ad26-49ab-bb36-267f093190b0" />
    <b>Safely delete the memory:</b>
    <img width="1108" height="368" alt="Image" src="https://github.com/user-attachments/assets/e1bf00ea-470e-4a4d-be83-f864a7763d6a" />
</details>


<details>
<summary><b>Ex01 - Moar brainz! </b></summary>
<p>
The goal of this exercise is to create a method that allows us to create multiple objects of the same class, again allocating memory on the heap. Basically, we receive the number of objects as a parameter, and when we use new, we use this size to allocate memory for all the objects at once. It's important to ensure that, when the program ends, we delete all the created objects to avoid memory leaks.
<img width="1040" height="444" alt="Image" src="https://github.com/user-attachments/assets/9ce77347-2793-481a-92fb-8fbd2887acb6" />
When we delete the objects, we do not need to do it in a loop. We just need to treat the object as an array of objects <b>([])</b>, and all the objects inside will be deleted.
<img width="1074" height="482" alt="Image" src="https://github.com/user-attachments/assets/f4f90d34-b9fc-4252-a36c-b8369b7c3895" />
</p>
</details>

<details>
    <summary><b>Ex02 - HI THIS IS BRAIN </b></summary>
    <p> The goal of this exercise is to understand the difference between a pointer and a reference to the memory address of a variable (in this case, a string). This concept has already been used extensively in previous exercises in C.
    </p>
</details>

<details> 
    <summary><b>Ex03 - Unnecessary violence </b></summary>
    <p> The goal of this exercise is to understand when we should use pointers or references off one object.
    </p>
    <p>HumanA takes the Weapon in its constructor, meaning, it will always have a weapon. So it’s best to use a <b>reference</b> here because HumanA expects the weapon to exist and never change which weapon it refers to. This way, the reference guarantees there’s always a valid weapon.</p>
    <p>HumanB does not take a Weapon in the constructor and may not have one at all initially, So you need to store the weapon as a <b>pointer</b> because it might point to nullptr (no weapon).You can later assign it a valid weapon using a setter function. This gives flexibility to have no weapon or change the weapon during runtime.
    </p>
</details>

<details> 
    <summary><b>Ex04 - Sed is for losers </b></summary>
    <p> The goal of this exercise is to understand how to use some C++ functions to read from a file and then use the string class to manipulate the content of that file. Its main goal is to replace every occurrence of one string with another string.
    </p>
</details>

<details> 
    <summary><b>Ex05 - Harl</b></summary>
    <p>The goal of this exercise is to use pointers to member functions. Instead of using several if/else statements or a switch case, we create an array of pointers to functions and, based on the given input, select the appropriate function to call. This reduces code complexity and makes it easier to understand.
    <img width="1816" height="634" alt="Image" src="https://github.com/user-attachments/assets/512f84d3-102c-46f7-a3f3-f0cddc64f2fa" />
    </p>
</details>

<details> 
    <summary><b>Ex06 - Harl filter</b></summary>
    <p>In this exercise, we implement a switch-case statement to select from an array of functions the one that handles the level entered by the user. Each level corresponds to the position of the function in the array. </p>
</details>