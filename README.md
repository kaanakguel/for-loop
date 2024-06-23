Genutzter Editor:Genutyter Editor: Github web interface Compiler: gcc

Wenn während des Programmlaufs ein Fehler auftritt (z.B. bei der Speicherallokierung), wird der bereits allokierte Speicher nicht freigegeben. Dies könnte zu Speicherlecks führen.
Wenn die Datei sehr groß ist, kann die dynamische Speicherallokierung fehlschlagen. Es wäre sinnvoll, zusätzliche Überprüfungen und Fehlermeldungen für solche Fälle zu implementieren.
