package com.refactorap2.refactorAP2.exceptions;

import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.ControllerAdvice;
import org.springframework.web.bind.annotation.ExceptionHandler;

@ControllerAdvice
public class HandlerException {
    @ExceptionHandler(NoCustomersFoundException.class)
    public ResponseEntity<String> handleNoCustomersFound(NoCustomersFoundException exception){
        return ResponseEntity.badRequest().body(exception.getMessage());
    }
}
