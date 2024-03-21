package com.refactorap2.refactorAP2.exceptions;

public class NoCustomersFoundException extends RuntimeException{
    public NoCustomersFoundException(){super("Nenhum cliente encontrado");}
}
