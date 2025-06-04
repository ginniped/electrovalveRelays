# electrovalveRelays

Controllo automatizzato di elettrovalvole tramite Arduino Mega e modulo relè.

## Descrizione

Questo progetto gestisce l'attivazione ciclica di due cilindri da 40 mm utilizzando una **valvola solenoide API A1E250** con bobina **P2FCB349 Parker a 24VDC**, controllata tramite un modulo **relè HW-482 V2.0.1 a 5VDC**.

L'Arduino Mega si occupa di comandare il modulo relè, che funge da interruttore tra l'alimentatore e la valvola solenoide, alimentandola automaticamente ogni 10 secondi.

## Componenti principali

- 2x Cilindri pneumatici da 40 mm
- 1x Valvola Solenoide API A1E250
- 1x Bobina Parker P2FCB349 (24VDC)
- 1x Modulo Relè HW-482 V2.0.1 (5VDC)
- 1x Arduino Mega
- Alimentatore 24VDC

## Funzionamento

1. L'Arduino Mega invia un segnale al modulo relè ogni 10 secondi.
2. Il modulo relè chiude il circuito tra l'alimentatore e la valvola.
3. La valvola si attiva, alimentando i cilindri pneumatici.
4. Dopo un certo tempo (programmabile), la valvola viene disattivata.

## Schema elettrico (semplificato)
Vedi img


