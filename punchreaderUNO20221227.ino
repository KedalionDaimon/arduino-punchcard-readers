/*

; HOW TO GENERATE A PUNCH CARD IMAGE:

CTRL-D: (X _ X X _ X)
CTRL-C: (X X _ _ X X)

(defun findchar (x)
  (cond
    ((eq x #\0) '(0~~~ (X _ _ _ _ _)))     ((eq x #\U) '(U~~~ (X _ _ X X X)))
    ((eq x #\1) '(1~~~ (_ X _ _ _ _)))     ((eq x #\V) '(V~~~ (_ X _ X X X)))
    ((eq x #\2) '(2~~~ (_ _ X _ _ _)))     ((eq x #\W) '(W~~~ (X X _ X X X)))
    ((eq x #\3) '(3~~~ (_ _ _ X _ _)))     ((eq x #\X) '(X~~~ (_ _ X X X X)))
    ((eq x #\4) '(4~~~ (_ _ _ _ X _)))     ((eq x #\Y) '(Y~~~ (X _ X X X X)))
    ((eq x #\5) '(5~~~ (_ _ _ _ _ X)))     ((eq x #\Z) '(Z~~~ (_ X X X X X)))
    ((eq x #\6) '(6~~~ (_ X _ _ _ X)))     ((eq x #\,) '(COMA (_ X X _ _ _)))
    ((eq x #\7) '(7~~~ (_ _ X _ _ X)))     ((eq x #\.) '(DOTT (X X X _ _ _)))
    ((eq x #\8) '(8~~~ (_ _ _ X _ X)))     ((eq x #\;) '(SEMC (X _ _ X _ _)))
    ((eq x #\9) '(9~~~ (_ _ _ _ X X)))     ((eq x #\:) '(COLN (X _ X X _ _)))
    ((eq x #\linefeed) '(LINF (_ _ X X _ _)))
    ((eq x #\backspace) '(BKSP (_ X _ _ X _)))
    ((eq x #\ ) '(____ (X X X X X _)))     ((eq x #\() '(OPAR (_ X _ X _ _)))
    ((eq x #\A) '(A~~~ (X X _ _ _ X)))     ((eq x #\)) '(CPAR (X X _ X _ _)))
    ((eq x #\B) '(B~~~ (X _ X _ _ X)))     ((eq x #\[) '(OBRA (_ X X X _ _)))
    ((eq x #\C) '(C~~~ (_ X X _ _ X)))     ((eq x #\]) '(CBRA (X X X X _ _)))
    ((eq x #\D) '(D~~~ (X X X _ _ X)))     ((eq x #\`) '(BTIC (X _ X X X _)))
    ((eq x #\E) '(E~~~ (X _ _ X _ X)))     ((eq x #\/) '(SLSH (X X _ _ X _)))
    ((eq x #\F) '(F~~~ (_ X _ X _ X)))     ((eq x #\<) '(SMLR (_ _ X _ X _)))
    ((eq x #\G) '(G~~~ (X X _ X _ X)))     ((eq x #\>) '(GRTR (X _ X _ X _)))
    ((eq x #\H) '(H~~~ (_ _ X X _ X)))     ((eq x #\+) '(PLUS (_ X X _ X _)))
    ((eq x #\I) '(I~~~ (X X _ _ _ _)))     ((eq x #\-) '(MINS (X X X _ X _)))
    ((eq x #\J) '(J~~~ (_ X X X _ X)))     ((eq x #\=) '(EQUL (_ _ _ X X _)))
    ((eq x #\K) '(K~~~ (X X X X _ X)))     ((eq x #\*) '(ASTR (X _ _ X X _)))
    ((eq x #\L) '(L~~~ (X X _ X X _)))     ((eq x #\") '(QUOT (_ X _ X X _)))
    ((eq x #\M) '(M~~~ (X _ _ _ X X)))     ((eq x #\@) '(ATSG (_ X X X X _)))
    ((eq x #\N) '(N~~~ (_ X _ _ X X)))     ((eq x #\\) '(BKSL (_ _ X X X _)))
    ((eq x #\O) '(O~~~ (X _ X _ _ _)))     ((eq x #\') '(SINQ (X _ _ _ _ X)))
    ((eq x #\P) '(P~~~ (_ _ X _ X X)))     ((eq x #\#) '(HASH (X _ _ _ X _)))
    ((eq x #\Q) '(Q~~~ (X _ X _ X X)))
    ((eq x #\R) '(R~~~ (_ X X _ X X)))
    ((eq x #\S) '(S~~~ (X X X _ X X)))
    ((eq x #\T) '(T~~~ (_ _ _ X X X)))
    (t '(UKNW (_ _ _ _ _ _)))))

(defun puncheachchar (n listofchars)
  (cond ((null listofchars) '())
        (t (progn (princ (cons n (findchar (car listofchars)))) (terpri)
                  (puncheachchar (+ n 1) (cdr listofchars))))))

(defun punch (somestring)
  (let ((charlist (coerce somestring 'list)))
  (progn (terpri)
         (puncheachchar 1 charlist))))

(punch "(DEFUN X () 1)")

  (punch "(DEFUN FC (X) (COND ((ZEROP X) 1) (T (* X (FC (- X 1))))))
(FC 66)
")

(1 OPAR (_ X _ X _ _))
(2 D~~~ (X X X _ _ X))
(3 E~~~ (X _ _ X _ X))
(4 F~~~ (_ X _ X _ X))
(5 U~~~ (X _ _ X X X))
(6 N~~~ (_ X _ _ X X))
(7 ____ (X X X X X _))
(8 F~~~ (_ X _ X _ X))
(9 C~~~ (_ X X _ _ X))
(10 ____ (X X X X X _))
(11 OPAR (_ X _ X _ _))
(12 X~~~ (_ _ X X X X))
(13 CPAR (X X _ X _ _))
(14 ____ (X X X X X _))
(15 OPAR (_ X _ X _ _))
(16 C~~~ (_ X X _ _ X))
(17 O~~~ (X _ X _ _ _))
(18 N~~~ (_ X _ _ X X))
(19 D~~~ (X X X _ _ X))
(20 ____ (X X X X X _))
(21 OPAR (_ X _ X _ _))
(22 OPAR (_ X _ X _ _))
(23 Z~~~ (_ X X X X X))
(24 E~~~ (X _ _ X _ X))
(25 R~~~ (_ X X _ X X))
(26 O~~~ (X _ X _ _ _))
(27 P~~~ (_ _ X _ X X))
(28 ____ (X X X X X _))
(29 X~~~ (_ _ X X X X))
(30 CPAR (X X _ X _ _))
(31 ____ (X X X X X _))
(32 1~~~ (_ X _ _ _ _))
(33 CPAR (X X _ X _ _))
(34 ____ (X X X X X _))
(35 OPAR (_ X _ X _ _))
(36 T~~~ (_ _ _ X X X))
(37 ____ (X X X X X _))
(38 OPAR (_ X _ X _ _))
(39 ASTR (X _ _ X X _))
(40 ____ (X X X X X _))
(41 X~~~ (_ _ X X X X))
(42 ____ (X X X X X _))
(43 OPAR (_ X _ X _ _))
(44 F~~~ (_ X _ X _ X))
(45 C~~~ (_ X X _ _ X))
(46 ____ (X X X X X _))
(47 OPAR (_ X _ X _ _))
(48 MINS (X X X _ X _))
(49 ____ (X X X X X _))
(50 X~~~ (_ _ X X X X))
(51 ____ (X X X X X _))
(52 1~~~ (_ X _ _ _ _))
(53 CPAR (X X _ X _ _))
(54 CPAR (X X _ X _ _))
(55 CPAR (X X _ X _ _))
(56 CPAR (X X _ X _ _))
(57 CPAR (X X _ X _ _))
(58 CPAR (X X _ X _ _))
(59 LINF (_ _ X X _ _))
(60 OPAR (_ X _ X _ _))
(61 F~~~ (_ X _ X _ X))
(62 C~~~ (_ X X _ _ X))
(63 ____ (X X X X X _))
(64 6~~~ (_ X _ _ _ X))
(65 6~~~ (_ X _ _ _ X))
(66 CPAR (X X _ X _ _))
(67 LINF (_ _ X X _ _))




*/


//cut-off at 100

#define LIGHTTHRESHOLD 80
#define LOWERTHRESHOLD 30

int b0;
int b1;
int b2;
int b3;
int b4;
int b5;

short nextholes = 0;
short countholes = 0;
short cmpholes = 0;
short starteddecoding = 0;
short sawzero = 0;

/* needed for I/O */
char c;

void displaycharacter(char letter) {
  Serial.print(letter);
}

long readsinglechar() {
  nextholes = 0;
  countholes = 0;
  c = 0;

  while (1) {
    b0 = analogRead(A0);
    b1 = analogRead(A1);
    b2 = analogRead(A2);
    b3 = analogRead(A3);
    b4 = analogRead(A4);
    b5 = analogRead(A5);

    /*
    // Serial.print(b0);
    // Serial.print("    ");
    // Serial.print(b1);
    // Serial.print("    ");
    // Serial.print(b2);
    // Serial.print("    ");
    // Serial.print(b3);
    // Serial.print("    ");
    // Serial.print(b4);
    // Serial.print("    ");
    // Serial.println(b5);

    delay(200);
    */
    
    if ((nextholes == 0) &&
        ((b0 > LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
        (b3 > LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD))) {
          countholes = 0;
          cmpholes = 0;
          if (c != 0) {
            displaycharacter(c);
          }
          return(c); // return outside means do return even if c == 0, i.e. nothing sensible was read,
                     // but in exchange stop hogging the system's attention
          // Serial.print("---------- next holes to be read: ---------- ");
          // Serial.print(b0);
          // Serial.print("    ");
          // Serial.print(b1);
          // Serial.print("    ");
          // Serial.print(b2);
          // Serial.print("    ");
          // Serial.print(b3);
          // Serial.print("    ");
          // Serial.print(b4);
          // Serial.print("    ");
          // Serial.print(b5);
          // Serial.println(" ----------");
          nextholes = 1;
      
    } else if ((nextholes == 1) &&
               ((b0 > LIGHTTHRESHOLD) || (b1 > LIGHTTHRESHOLD) || (b2 > LIGHTTHRESHOLD) ||
                (b3 > LIGHTTHRESHOLD) || (b4 > LIGHTTHRESHOLD) || (b5 > LIGHTTHRESHOLD)) &&
               ((b0 < LOWERTHRESHOLD) || (b1 < LOWERTHRESHOLD) || (b2 < LOWERTHRESHOLD) ||
                (b3 < LOWERTHRESHOLD) || (b4 < LOWERTHRESHOLD) || (b5 < LOWERTHRESHOLD))) {
        
        if ((countholes < 2) &&
            (b0 > LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
            (b3 < LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 2;
          nextholes = 0; cmpholes = 0;
          c = '\n';
        }

        sawzero = 0;
        
        if ((countholes < 2) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 2;
          nextholes = 0; cmpholes = 0;
          c = '6';
          // Serial.println(" SIX ");
        } else if ((countholes < 2) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 2;
          nextholes = 0; cmpholes = 0;
          c = '7';
          // Serial.println(" SEVEN ");
        } else if ((countholes < 2) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 2;
          nextholes = 0; cmpholes = 0;
          c = '8';
          // Serial.println(" EIGHT ");
        } else if ((countholes < 2) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 2;
          nextholes = 0; cmpholes = 0;
          c = '9';
          // Serial.println(" NINE ");
        } else if ((countholes < 1) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 1;
          nextholes = 0; cmpholes = 0;
          c = '0';
          sawzero = 1;
          // Serial.println(" ZERO ");                    
        } else if ((countholes < 1) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 1;
          nextholes = 0; cmpholes = 0;
          c = '1';
          // Serial.println(" ONE ");
        } else if ((countholes < 1) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 1;
          nextholes = 0; cmpholes = 0;
          c = '2';
          // Serial.println(" TWO ");
        } else if ((countholes < 1) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 1;
          nextholes = 0; cmpholes = 0;
          c = '3';
          // Serial.println(" THREE ");
        } else if ((countholes < 1) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 1;
          nextholes = 0; cmpholes = 0;
          c = '4';
          // Serial.println(" FOUR ");
        } else if ((countholes < 1) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 1;
          nextholes = 0; cmpholes = 0;
          c = '5';
          // Serial.println(" FIVE ");



        } else if ((countholes < 5) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 5;
          nextholes = 0; cmpholes = 0;
          c = ' ';
          // Serial.println(" SPACE ");
        } else if ((countholes < 2) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 2;
          nextholes = 0; cmpholes = 0;
          c = 127; // backspace 8 or 127
          // Serial.println(" BKSP ");



        } else if ((countholes < 3) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = 'A';
          // Serial.println(" A ");
        } else if ((countholes < 3) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = 'B';
          // Serial.println(" B ");
        } else if ((countholes < 3) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = 'C';
          // Serial.println(" C ");
        } else if ((countholes < 4) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 4;
          nextholes = 0; cmpholes = 0;
          c = 'D';
          // Serial.println(" D ");
        } else if ((countholes < 3) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = 'E';
          // Serial.println(" E ");
        } else if ((countholes < 3) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = 'F';
          // Serial.println(" F ");
        } else if ((countholes < 4) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 4;
          nextholes = 0; cmpholes = 0;
          c = 'G';
          // Serial.println(" G ");
        } else if ((countholes < 3) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = 'H';
          // Serial.println(" H ");
        } else if ((countholes < 2) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 2;
          nextholes = 0; cmpholes = 0;
          c = 'I';
          // Serial.println(" I ");
        } else if ((countholes < 4) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 4;
          nextholes = 0; cmpholes = 0;
          c = 'J';
          // Serial.println(" J ");
        } else if ((countholes < 5) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 5;
          nextholes = 0; cmpholes = 0;
          c = 'K';
          // Serial.println(" K ");
        } else if ((countholes < 4) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 4;
          nextholes = 0; cmpholes = 0;
          c = 'L';
          // Serial.println(" L ");
        } else if ((countholes < 3) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = 'M';
          // Serial.println(" M ");
        } else if ((countholes < 3) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = 'N';
          // Serial.println(" N ");
        } else if ((countholes < 2) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 2;
          nextholes = 0; cmpholes = 0;
          c = 'O';
          // Serial.println(" O ");
        } else if ((countholes < 3) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = 'P';
          // Serial.println(" P ");
        } else if ((countholes < 4) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 4;
          nextholes = 0; cmpholes = 0;
          c = 'Q';
          // Serial.println(" Q ");
        } else if ((countholes < 4) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 4;
          nextholes = 0; cmpholes = 0;
          c = 'R';
          // Serial.println(" R ");
        } else if ((countholes < 5) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 5;
          nextholes = 0; cmpholes = 0;
          c = 'S';
          // Serial.println(" S ");
        } else if ((countholes < 3) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = 'T';
          // Serial.println(" T ");
        } else if ((countholes < 4) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 4;
          nextholes = 0; cmpholes = 0;
          c = 'U';
          // Serial.println(" U ");
        } else if ((countholes < 4) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 4;
          nextholes = 0; cmpholes = 0;
          c = 'V';
          // Serial.println(" V ");
        } else if ((countholes < 5) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 5;
          nextholes = 0; cmpholes = 0;
          c = 'W';
          // Serial.println(" W ");
        } else if ((countholes < 4) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 4;
          nextholes = 0; cmpholes = 0;
          c = 'X';
          // Serial.println(" X ");
        } else if ((countholes < 5) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 5;
          nextholes = 0; cmpholes = 0;
          c = 'Y';
          // Serial.println(" Y ");
        } else if ((countholes < 5) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 5;
          nextholes = 0; cmpholes = 0;
          c = 'Z';
          // Serial.println(" Z ");



        } else if ((countholes < 2) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 2;
          nextholes = 0; cmpholes = 0;
          c = ',';
          // Serial.println(" , ");
        } else if ((countholes < 3) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = '.';
          // Serial.println(" . ");
        } else if ((countholes < 2) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 2;
          nextholes = 0; cmpholes = 0;
          c = ';';
          // Serial.println(" ; ");
        } else if ((countholes < 3) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = ':';
          // Serial.println(" : ");
        } else if ((countholes < 2) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 2;
          nextholes = 0; cmpholes = 0;
          c = '(';
          // Serial.println(" ( ");
        } else if ((countholes < 3) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = ')';
          // Serial.println(" ) ");
        } else if ((countholes < 3) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = '[';
          // Serial.println(" [ ");
        } else if ((countholes < 4) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 4;
          nextholes = 0; cmpholes = 0;
          c = ']';
          // Serial.println(" ] ");
        } else if ((countholes < 4) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 4;
          nextholes = 0; cmpholes = 0;
          c = '`';
          // Serial.println(" ` ");
        } else if ((countholes < 3) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = '/';
          // Serial.println(" / ");
        } else if ((countholes < 2) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 2;
          nextholes = 0; cmpholes = 0;
          c = '<';
          // Serial.println(" < ");
        } else if ((countholes < 3) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = '>';
          // Serial.println(" > ");
        } else if ((countholes < 3) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = '+';
          // Serial.println(" + ");
        } else if ((countholes < 4) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 4;
          nextholes = 0; cmpholes = 0;
          c = '-';
          // Serial.println(" - ");
        } else if ((countholes < 2) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 2;
          nextholes = 0; cmpholes = 0;
          c = '=';
          // Serial.println(" = ");
        } else if ((countholes < 3) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = '*';
          // Serial.println(" * ");
        } else if ((countholes < 3) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = '"';
          // Serial.println(" \" ");
        } else if ((countholes < 4) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 4;
          nextholes = 0; cmpholes = 0;
          c = '@';
          // Serial.println(" @ ");
        } else if ((countholes < 3) &&
                   (b0 > LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 3;
          nextholes = 0; cmpholes = 0;
          c = '\\';
          // Serial.println(" \ ");
        } else if ((countholes < 2) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 2;
          nextholes = 0; cmpholes = 0;
          c = '\'';
          // Serial.println(" ' ");
        } else if ((countholes < 2) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 > LIGHTTHRESHOLD)) {
          countholes = 2;
          nextholes = 0; cmpholes = 0;
          c = '#';
          // Serial.println(" # ");



        } else if ((countholes < 1) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 > LIGHTTHRESHOLD) && (b2 < LIGHTTHRESHOLD) &&
                   (b3 < LIGHTTHRESHOLD) && (b4 > LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 1;
          nextholes = 0; cmpholes = 0;
          c = 4; // End of transmission = Ctrl-D
          // Serial.println(" CTRL-D ");
        } else if ((countholes < 2) &&
                   (b0 < LIGHTTHRESHOLD) && (b1 < LIGHTTHRESHOLD) && (b2 > LIGHTTHRESHOLD) &&
                   (b3 > LIGHTTHRESHOLD) && (b4 < LIGHTTHRESHOLD) && (b5 < LIGHTTHRESHOLD)) {
          countholes = 2;
          nextholes = 0; cmpholes = 0;
          c = 3; // End of text = Ctrl-C
          // Serial.println(" CTRL-C ");


        
        } else {
          /* nextholes = 0;
          // Serial.print(b0);
          // Serial.print("    ");
          // Serial.print(b1);
          // Serial.print("    ");
          // Serial.print(b2);
          // Serial.print("    ");
          // Serial.print(b3);
          // Serial.print("    ");
          // Serial.print(b4);
          // Serial.print("    ");
          // Serial.println(b5);
          */


            
        }
    } else {
      cmpholes = 0;
      if (b0 < LIGHTTHRESHOLD) {
        cmpholes++;
      }
      if (b1 < LIGHTTHRESHOLD) {
        cmpholes++;
      }
      if (b2 < LIGHTTHRESHOLD) {
        cmpholes++;
      }
      if (b3 < LIGHTTHRESHOLD) {
        cmpholes++;
      }
      if (b4 < LIGHTTHRESHOLD) {
        cmpholes++;
      }
      if (b5 < LIGHTTHRESHOLD) {
        cmpholes++;
      }
      if (cmpholes > countholes) {
          countholes = 0;
          cmpholes = 0;
          nextholes = 1;
      }
    }
  }
}

void setup() {

  Serial.begin(9600);

  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);

  // Serial.println("Ready to read card.");
}

void loop() {

    readsinglechar();

    /*
    if (Serial.available() > 0) {
      char ch = Serial.read();
      Serial.print((char) ch);
      Serial.print((char) ch);
      Serial.print((char) ch);
    }
    */

}
