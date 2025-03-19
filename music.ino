void setupmusic() {
#define Buzzerpin 40

#define crochet 500
#define quaver 250
#define semiquaver 125

#define left_b 494
#define left_bf 466
#define left_a 440
#define left_gs 415
#define left_g 392
#define left_fs 370
#define left_f 349
#define left_e 330
#define left_ds 311
#define left_d 294
#define left_cs 277
#define left_c 262

#define lower_c 523
#define lower_cs 554
#define lower_d 587
#define lower_ds 622
#define lower_e 659
#define lower_f 698
#define lower_fs 740
#define lower_g 784
#define lower_gs 831
#define lower_a 880
#define lower_bf 932
#define lower_b 988
#define c 1046
#define cs 1109
#define d 1175
#define ds 1245
#define e 1319
#define f 1397
#define fs 1480
#define g 1568
#define gs 1661
#define a 1760
#define bf 1865
#define b 1976
#define high_c 2093
#define high_cs 2217
#define high_d 2349
#define high_ds 2489
#define high_e 2637
#define high_f 2793
#define high_fs 2960
#define high_g 3136
#define high_gs 3322
#define high_a 3520
#define high_bf 3729
#define high_b 3951

  pinMode(Buzzerpin, OUTPUT);
}

void epic() {
  tone(Buzzerpin, g);
  delay(crochet + quaver);
  noTone(Buzzerpin);
  delay(quaver);
  
  tone(Buzzerpin, g);
  delay(semiquaver);
  noTone(Buzzerpin);
  delay(semiquaver);

  tone(Buzzerpin, g);
  delay(semiquaver);
  noTone(Buzzerpin);
  tone(Buzzerpin, g);
  delay(semiquaver);
  noTone(Buzzerpin);
  tone(Buzzerpin, f);
  delay(semiquaver);
  noTone(Buzzerpin);
  tone(Buzzerpin, g);
  delay(semiquaver + quaver);
  noTone(Buzzerpin);

  tone(Buzzerpin, g);
  delay(crochet + quaver);
  noTone(Buzzerpin);
  delay(quaver);
  
  tone(Buzzerpin, g);
  delay(semiquaver);
  noTone(Buzzerpin);
  delay(semiquaver);

  tone(Buzzerpin, g);
  delay(semiquaver);
  noTone(Buzzerpin);
  tone(Buzzerpin, g);
  delay(semiquaver);
  noTone(Buzzerpin);
  tone(Buzzerpin, f);
  delay(semiquaver);
  noTone(Buzzerpin);
  tone(Buzzerpin, g);
  delay(semiquaver + quaver);
  noTone(Buzzerpin);

  tone(Buzzerpin, g);
  delay(crochet + quaver);
  noTone(Buzzerpin);

  tone(Buzzerpin, bf);
  delay(crochet);
  noTone(Buzzerpin);
  tone(Buzzerpin, g);
  delay(crochet);
  noTone(Buzzerpin);
  tone(Buzzerpin, f);
  delay(crochet);
  noTone(Buzzerpin);

  tone(Buzzerpin, ds);
  delay(crochet);
  noTone(Buzzerpin);

  tone(Buzzerpin, c);
  delay(quaver);
  noTone(Buzzerpin);
  
  tone(Buzzerpin, c);
  delay(quaver);
  noTone(Buzzerpin);

  tone(Buzzerpin, d);
  delay(quaver);
  noTone(Buzzerpin);

  tone(Buzzerpin, ds);
  delay(quaver);
  noTone(Buzzerpin);

  tone(Buzzerpin, c);
  delay(quaver);
  noTone(Buzzerpin);

}

void mario() {
  tone(Buzzerpin, e);
  delay(semiquaver);
  noTone(Buzzerpin);

  tone(Buzzerpin, e);
  delay(semiquaver);
  noTone(Buzzerpin);

  delay(semiquaver);

  tone(Buzzerpin, e);
  delay(semiquaver);
  noTone(Buzzerpin);

  delay(semiquaver);

  tone(Buzzerpin, c);
  delay(semiquaver);
  noTone(Buzzerpin);

  tone(Buzzerpin, e);
  delay(quaver);
  noTone(Buzzerpin);

  tone(Buzzerpin, g);
  delay(quaver);
  noTone(Buzzerpin);

  delay(quaver);

  tone(Buzzerpin, lower_g);
  delay(quaver);
  noTone(Buzzerpin);

}

void nokia(){
  tone(Buzzerpin, e);
  delay(semiquaver);
  tone(Buzzerpin, d);
  delay(semiquaver);
  tone(Buzzerpin, lower_fs);
  delay(quaver);
  tone(Buzzerpin, lower_gs);
  delay(quaver);

  tone(Buzzerpin, cs);
  delay(semiquaver);
  tone(Buzzerpin, lower_b);
  delay(semiquaver);
  tone(Buzzerpin, lower_d);
  delay(quaver);
  tone(Buzzerpin, lower_e);
  delay(quaver);

  tone(Buzzerpin, lower_b);
  delay(semiquaver);
  tone(Buzzerpin, lower_a);
  delay(semiquaver);
  tone(Buzzerpin, lower_cs);
  delay(quaver);
  tone(Buzzerpin, lower_e);
  delay(quaver);

  tone(Buzzerpin, lower_a);
  delay(crochet);
  noTone(Buzzerpin);


}

void samsung() {
  tone(Buzzerpin, left_b);
  delay(quaver);
  noTone(Buzzerpin);

  tone(Buzzerpin, lower_fs);
  delay(quaver);
  noTone(Buzzerpin);

  tone(Buzzerpin, lower_b);
  delay(quaver);
  noTone(Buzzerpin);  

  tone(Buzzerpin, lower_bf);
  delay(quaver);
  noTone(Buzzerpin);
  delay(quaver);

  tone(Buzzerpin, lower_fs);
  delay(quaver);
  noTone(Buzzerpin);
  delay(quaver);
}

void magnetic() {
  tone(Buzzerpin, bf);
  delay(quaver + semiquaver);
  noTone(Buzzerpin);
  delay(semiquaver);
  tone(Buzzerpin, gs);
   delay(quaver + semiquaver);
  noTone(Buzzerpin);
  delay(semiquaver);
  tone(Buzzerpin, fs);
   delay(quaver + semiquaver);
  noTone(Buzzerpin);
  delay(semiquaver);
  tone(Buzzerpin,f);
   delay(quaver + semiquaver);
  noTone(Buzzerpin);
  delay(semiquaver);
  noTone(Buzzerpin);

  
  delay(quaver);
  tone(Buzzerpin, f); 
  delay(quaver);
  noTone(Buzzerpin);
  delay(quaver);
  tone(Buzzerpin, f);
  delay(quaver);
  noTone(Buzzerpin);
  

  delay(quaver);
  tone(Buzzerpin, f);
  delay(quaver);
  noTone(Buzzerpin);
  
  delay(quaver);
  tone(Buzzerpin, ds);
  delay(crochet);
  noTone(Buzzerpin);
  delay(quaver);

  tone(Buzzerpin, f);
  delay(quaver);
  tone(Buzzerpin, gs);
  delay(quaver);

  tone(Buzzerpin, cs);
  delay(quaver);
  noTone(Buzzerpin);
  tone(Buzzerpin, cs);
  delay(crochet);
  noTone(Buzzerpin);
  tone(Buzzerpin, cs);
  delay(quaver);
  noTone(Buzzerpin);

  for(int count = 0; count < 7; count += 1){
  tone(Buzzerpin, f);
  delay(semiquaver);
  noTone(Buzzerpin);
  delay(semiquaver);
  }

  tone(Buzzerpin, ds);
  delay(crochet);
  noTone(Buzzerpin);
  delay(quaver);

  tone(Buzzerpin, f);
  delay(quaver);
  tone(Buzzerpin, gs);
  delay(quaver);

  tone(Buzzerpin, cs);
  delay(quaver);
  noTone(Buzzerpin);
  tone(Buzzerpin, cs);
  delay(crochet);
  noTone(Buzzerpin);
  tone(Buzzerpin, cs);
  delay(quaver);
  noTone(Buzzerpin);

 delay(quaver);
  tone(Buzzerpin, f); 
  delay(quaver);
  noTone(Buzzerpin);
  delay(quaver);
  tone(Buzzerpin, f);
  delay(quaver);
  noTone(Buzzerpin);

  delay(quaver);
  tone(Buzzerpin, f);
  delay(quaver);
  noTone(Buzzerpin);
  
  delay(quaver);
  tone(Buzzerpin, ds);
  delay(crochet);
  noTone(Buzzerpin);
  delay(quaver);
  tone(Buzzerpin, f);
  delay(quaver);
  tone(Buzzerpin, gs);
  delay(quaver);

  tone(Buzzerpin, cs);
  delay(quaver);
  noTone(Buzzerpin);
  tone(Buzzerpin, cs);
  delay(crochet);
  noTone(Buzzerpin);
  tone(Buzzerpin, cs);
  delay(quaver);
  noTone(Buzzerpin);

  for(int count = 0; count < 7; count += 1){
  tone(Buzzerpin, f);
  delay(semiquaver);
  noTone(Buzzerpin);
  delay(semiquaver);
  }

  tone(Buzzerpin, ds);
  delay(crochet);
  noTone(Buzzerpin);
  delay(quaver);

  tone(Buzzerpin, f);
  delay(quaver);
  tone(Buzzerpin, gs);
  delay(quaver);

  tone(Buzzerpin, cs);
  delay(quaver);
  noTone(Buzzerpin);
  tone(Buzzerpin, cs);
  delay(crochet);
  noTone(Buzzerpin);
  tone(Buzzerpin, cs);
  delay(quaver);
  noTone(Buzzerpin);

  delay(crochet);

}
