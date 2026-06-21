# SnakeGame

## Descriere
SnakeGame este o implementare a clasicului joc Snake, scris în C++. Jucătorul controlează un șarpe care se deplasează pe o tablă de joc, având scopul de a mânca mere pentru a crește în lungime, evitând în același timp coliziunea cu marginile tablei sau cu propriul corp.

## Reguli de joc
- Șarpele se deplasează continuu într-una din cele 4 direcții: sus, jos, stânga, dreapta.
- Jucătorul schimbă direcția de mișcare folosind tastele săgeți.
- Atunci când șarpele ajunge pe poziția unui măr, acesta este "mâncat", iar șarpele crește cu un segment.
- După consumarea unui măr, un măr nou apare pe o poziție liberă de pe tablă.
- Jocul se termină dacă șarpele lovește marginea tablei sau propriul corp.
- Scopul jucătorului este să acumuleze cât mai multe puncte (mere mâncate) înainte de a pierde.

## Structuri de date

| Structură/Clasă | Rol / Sarcină |
|---|---|
| `Point` | Reprezintă o coordonată (x, y) pe tabla de joc. Este folosită pentru a indica poziția șarpelui, a merelor și a elementelor desenate pe ecran. |
| `Direction` | Enumerație care reprezintă direcția de mișcare a șarpelui: Top, Left, Right, Bottom. |
| `Apple` | Reprezintă mărul de pe tablă. Memorează poziția acestuia și oferă acces la ea. |
| `Snake` | Reprezintă șarpele jucătorului. Memorează segmentele corpului, gestionează mișcarea (`Move`), creșterea (`Eat`) și oferă informații despre poziția și lungimea curentă. |
| `Board` | Reprezintă tabla de joc, definită prin lățime și înălțime. |
| `Painter` | Responsabil cu afișarea elementelor grafice pe ecran (desenarea imaginilor și a textului). |
| `GameEngine` | Clasa principală care leagă toate componentele (Snake, Apple, Board) și gestionează logica jocului: inițializare (`Init`) și rularea buclei de joc (`Run`). |