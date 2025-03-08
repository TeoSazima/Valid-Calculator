# Valid-Calculator

# CS: Kód pro generování a ověřování platnosti kódů

## Popis

Tento program v jazyce C++ umožňuje generování a ověřování platnosti kódů podle specifických pravidel. Program má dvě hlavní funkce: 
~~ 1. Vygenerování platného kódu ~~ (Ještě není hotovo).
2. Kontrola platnosti zadaného kódu

## Pravidla pro platnost kódu

Kód se skládá ze čtyř částí, každá část má 4 znaky (čísla nebo písmena). Forma kódu je `XXXX-XXXX-XXXX-XXXX`. Platnost kódu se odvíjí od následujících pravidel:

1. Součet ASCII hodnot každé části musí být dělitelný 6.
2. V celém kódu musí být alespoň jedno malé písmeno.
3. V celém kódu musí být alespoň jedno velké písmeno.
4. V celém kódu musí být alespoň jedna číslice.
5. Součet všech číslic v kódu nesmí přesáhnout hodnotu 30.
6. Kód nesmí obsahovat písmeno "P".
7. Kód musí obsahovat alespoň jedno písmeno "S".
8. Kód nesmí začínat písmenem.
9. Kód nesmí končit číslem 4.

## Jak používat

1. Stáhněte a otevřete projekt v kompatibilním vývojovém prostředí pro C++.
2. Zkompilujte a spusťte program.
3. Vyberte operaci, kterou chcete provést:
    - 1 pro vygenerování platného kódu.
    - 2 pro kontrolu platnosti zadaného kódu.
4. Pokud zvolíte možnost 2, zadejte kód, který chcete zkontrolovat, ve formátu `XXXX-XXXX-XXXX-XXXX`.
5. Program zobrazí výsledky jednotlivých testů a vyhodnotí, zda je kód platný nebo ne.

## Příklad

Příklad validního kódu: `1S33-1113-1113-123x`

Při kontrole platnosti kódu program provede následující testy a zobrazí výsledky:

1. Test dělení součtů ASCII hodnot částí kódu 6.
2. Test přítomnosti malého písmena.
3. Test přítomnosti velkého písmena.
4. Test přítomnosti číslice.
5. Test součtu všech číslic.
6. Test absence písmene "P".
7. Test přítomnosti písmene "S".
8. Test, zda kód nezačíná písmenem.
9. Test, zda kód nekončí číslem 4.

## Autor

Tento program byl vytvořen jako demonstrační projekt pro validaci a generování kódů.

Pokud máte jakékoli dotazy nebo připomínky, neváhejte mě kontaktovat.


# EN: Code for Generating and Validating Codes

## Description

This C++ program allows generating and validating codes according to specific rules. The program has two main functions:
~~ 1. Generate a valid code. ~~ (Not ready yet)
2. Validate the provided code.

## Code Validity Rules

The code consists of four parts, each part having 4 characters (numbers or letters). The format of the code is `XXXX-XXXX-XXXX-XXXX`. The code's validity is determined by the following rules:

1. The sum of the ASCII values of each part must be divisible by 6.
2. The entire code must contain at least one lowercase letter.
3. The entire code must contain at least one uppercase letter.
4. The entire code must contain at least one digit.
5. The sum of all digits in the code must not exceed 30.
6. The code must not contain the letter "P".
7. The code must contain at least one letter "S".
8. The code must not start with a letter.
9. The code must not end with the number 4.

## How to Use

1. Download and open the project in a compatible C++ development environment.
2. Compile and run the program.
3. Choose the operation you want to perform:
    - 1 to generate a valid code.
    - 2 to validate a provided code.
4. If you choose option 2, enter the code you want to validate in the format `XXXX-XXXX-XXXX-XXXX`.
5. The program will display the results of each test and determine whether the code is valid or not.

## Example

Example of a valid code: `1S33-1113-1113-123x`

When validating a code, the program will perform the following tests and display the results:

1. Test for divisibility of the ASCII value sums by 6.
2. Test for the presence of a lowercase letter.
3. Test for the presence of an uppercase letter.
4. Test for the presence of a digit.
5. Test for the sum of all digits.
6. Test for the absence of the letter "P".
7. Test for the presence of the letter "S".
8. Test to ensure the code does not start with a letter.
9. Test to ensure the code does not end with the number 4.

## Author

This program was created as a demonstration project for validating and generating codes.

If you have any questions or comments, feel free to contact me.
