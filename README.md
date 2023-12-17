Le projet sql-db comprend les fichiers "sql-db.pro", "main.cpp", "mainwindow.cpp", "mainwindow.h", "mainwindow.ui"
Le fichier "bddjeu.sql" permet d'importer la base de données dans sql
Le fichier "tablejeu.mwb" permet d'importer le diagramme uml dans workbench
Le fichier "Rapport jeu.pdf" contient les diagrammes de classes ainsi que l'explication de la méthode recup_table()

Pour charger le projet dans l'application qt allez dans modifier puis clique-droit charger le projet et choisissez sql-db.pro, le projet s'ouvrira avec tout les fichiers. Pour importer la base de données allez dans l'application workbench et ouvrez le fichier bddjeu.sql, executez ensuite les requetes. Vous pouvez maintenant complier le projet sur qt et l'executer. Une fenetre s'ouvre avec un tableView qui contient les données de la table jeu, vous pouvez modifier les valeurs en double cliquant sur une case, entrez une valeur et faites entrer.

Si vous etes sur windows il faut enlever le commentaire sur ces deux lignes:
//QSqlDatabase db = QSqlDatabase::addDatabase("QODBC3");
//db.setDatabaseName("Driver={MySQL ODBC 8.2 ANSI Driver};DATABASE=bddjeu;");

Et mettre en commentaire ces deux lignes :
QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");	
db.setDatabaseName("bddjeu"); 
