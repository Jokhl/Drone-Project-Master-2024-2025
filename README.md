  <h1>Synthèse des tests effectués sur le démonstrateur</h1>
  <h2>Test de la chaîne de puissance</h2>
  <p>
      L'objectif de ce test était de valider le choix de la motorisation et d'être certain qu'elle satisferait le besoin, en quantifiant la poussée produite par le moteur en fonction des vitesses de rotation sur un banc d'essai moteur.
  </p>
  <p>
      La méthodologie adoptée pour cet essai reposait sur un banc d'essai moteur qui fournissait la poussée en faisant varier les vitesses de rotation du moteur à partir de consignes envoyées depuis l'ordinateur lié au banc d'essai.
  </p>
  <p>
      Ce test a été essentiel, car il a permis de réaliser l'ensemble des autres tests et de garantir que le drone soit certifié capable de remplir les objectifs définis, sans prendre de risques en le testant dans des simulations réelles. Il constituait donc une étape indispensable dans la stratégie de validation.
  </p>

  <h2>Test de la base volante</h2>
  <p>
      L'objectif de cet essai était de vérifier le bon fonctionnement de la base volante dans son intégralité afin de s'assurer d'avoir une base de travail fiable et fonctionnelle pouvant acquérir le pilote automatique. Les validations attendues étaient: réception et transmission des signaux entre la radiocommande et le contrôleur de vol avec 6 channels en entrée, stabilisation et pilotage du drone possible sans grande difficulté, et retour sonore lors de l'armement et le désarmement.
  </p>
  <p>
      La méthodologie adoptée pour cet essai reposait sur une méthode assez simple. Le système volant a d'abord été alimenté de manière autonome, sans connexion au sol. Ensuite, l'opérateur a envoyé différentes consignes et commandes au système volant via la radiocommande sans plan de vol précis. L'objectif était d'observer les réactions du système et de pousser celui-ci dans ses limites électroniques. L'ensemble du test a été observé et analysé de manière qualitative pour vérifier le bon fonctionnement du système de base et tester ses limites dans une certaine mesure.
  </p>

  <h2>Test d'acquisition des coordonnées dans l'espace</h2>
  <p>
      L'objectif de cet essai était de valider le bon fonctionnement des balises de positionnement dans le cadre du projet de localisation. Ces tests visaient à s'assurer que le système permettait une acquisition précise des positions et un traitement efficace des données pour le pilotage automatique du drone. Les validations attendues étaient: acquisition des données de position des balises au sol et de la balise principale sur le drone, et traitement des données acquises pour ajuster la trajectoire du drone en temps réel.
  </p>
  <p>
      La méthodologie adoptée reposait sur la création d'un repère à l'aide des balises de positionnement. Les étapes du test comprenaient: disposer les trois balises fixes au sol de manière à former un triangle à l'aide de scotch servant de repère visuel, configurer une balise comme centre du repère, une autre comme extrémité de l'axe x et la troisième comme extrémité de l'axe y, positionner la carte de réception sur le drone, alimenter les balises et visualiser les coordonnées en temps réel sur le moniteur série de l'ordinateur branché à la carte réceptrice, et faire varier la position du drone pour observer les variations des coordonnées acquises.
  </p>
  <p>
      Après avoir effectué les différents essais, l'interprétation des résultats a montré que tous les critères de performance ont été respectés. Le système se positionnait correctement dans le repère défini en transmettant des coordonnées cohérentes et se corrigeait de manière cohérente dans le plan.
  </p>

  <h2>Test affichage et acquisition de la distance à parcourir</h2>
  <p>
      L'objectif de cet essai était de vérifier le bon fonctionnement de la réception de la distance à parcourir via le clavier intégré et de vérifier le bon affichage sur l'écran OLED utilisé.
  </p>
  <p>
      La méthodologie adoptée pour cet essai était très simple et consistait simplement à appuyer sur différents chiffres et de constater leur affichage sur l'écran. Ensuite, les boutons de validation de la sélection afin d'enregistrer la valeur saisie et d'effacement de la saisie, représentés respectivement par les boutons « D » et « A » sur le Keypad, ont également été testés. Le test de l'acquisition et de la bonne interprétation de la distance était indispensable afin de s'assurer que le système complet et assemblé n'exécute pas l'ordre souhaité.
  </p>
  <p>
      Après avoir effectué les différents essais, l'interprétation des résultats a montré que tous les critères de performance ont été respectés. En effet, les touches étaient correctement interprétées et lorsque les conditions étaient correctement réunies, la saisie était bien enregistrée.
  </p>

  <h2>Test de commutation et de réception des signaux</h2>
  <p>
      L'objectif de cet essai était de vérifier le bon fonctionnement du système de commutation et de la bonne réception et émission des signaux. Ces tests permettaient de valider si le drone répondait bien aux bonnes commandes aux bons moments. Les validations attendues étaient: réception et transmission des signaux entre la radiocommande et le contrôleur de vol avec 6 channels en entrée, commutation entre le mode manuel et le mode automatique avec un retour visuel pour l'opérateur, et armement et désarmement du drone avec un retour sonore et une réponse des moteurs cohérente.
  </p>
  <p>
      La méthodologie adoptée pour cet essai reposait sur plusieurs étapes. Le système volant a d'abord été alimenté de manière autonome, sans connexion au sol. Ensuite, les hélices ont été retirées afin de garantir la sécurité des opérateurs et du matériel. Des ordres de mouvement ont ensuite été envoyés via la radiocommande pour valider la réception des consignes et la réponse des moteurs. Enfin, la synchronisation entre les signaux lumineux et sonores et les actions correspondantes a été observée.
  </p>
  <p>
      Après avoir effectué les différents essais, l'interprétation des résultats a montré que tous les critères de performance ont été respectés. Les transitions entre les modes manuel et automatique se sont déroulées de manière rapide et fiable. Les indicateurs visuels et sonores ont été cohérents avec les actions réalisées, et la communication avec la radiocommande a été stable, sans latence notable. Les positions étaient cohérentes avec l'ensemble des déplacements, le rafraichissement était rapide et sans valeurs aberrantes.
  </p>

  <h2>Test d'autonomie et de stabilisation en mode manuel</h2>
  <p>
      L'objectif de cet essai était double. Il s'agissait de tester de manière opérationnelle l'autonomie de la batterie et également de déterminer les commandes de consigne de vitesse de rotation des moteurs pour les différentes phases de vol, que ce soit au décollage ou en stabilisation. Cela servirait pour implémenter des plages de valeurs cohérentes dans l'asservissement automatique en fonction de l'état de la batterie. Les validations attendues étaient: autonomie de la batterie cohérente par rapport aux calculs théoriques et extraction des valeurs de stabilisation aux différentes phases de vol via une interface Web.
  </p>
  <p>
      La méthodologie adoptée pour cet essai reposait sur plusieurs étapes. Le système volant a effectué différents vols consécutifs en entamant le test avec la batterie chargée à son plein potentiel. La tension de la batterie a été mesurée avant et après chaque vol, durant lesquels les valeurs de commande de poussée permettant au drone de se stabiliser et de décoller ont été récupérées. Cette méthode était justifiée par les conditions réelles du système.
  </p>
  <p>
      Au final, 13 vols consécutifs ont été faits durant ce test et l'interprétation des résultats a montré que tous les critères de performance ont été respectés. La décharge de la batterie s'est faite correctement, les valeurs s'affichaient correctement sur l'interface Web et étaient cohérentes avec les observations visuelles du drone. Les résultats obtenus ont permis de mettre en évidence une courbe de décharge qui correspondait bien à celle d'une batterie LiPo avec une consigne de poussée qui augmentait naturellement au fur et à mesure de la décharge de la batterie. La zone critique, marquant le début de la zone critique, a été définie à exactement 15 minutes, correspondant bien aux estimations théoriques faites auparavant. De plus, une plage de valeur pour la consigne de poussée comprise entre 1300 et 1400 a été définie, permettant d'englober plus de 95% des points mesurés. Les résultats ont également permis de visualiser les différents paliers de stabilisation du drone avec une consigne nécessaire pour permettre au drone de compenser son propre poids aux alentours de 1250 et une consigne de stabilisation en l'air aux alentours de 1330.
  </p>

  <h2>Test d'une séquence de vol complète sans hélices</h2>
  <p>
      L'objectif de l'essai était de tester le fonctionnement du module automatique pour une séquence de vol sans déplacement horizontal (montée, stabilisation, descente) sans hélices. Cela permettait d'observer facilement l'ensemble des données issues du pilote automatique, avec notamment l'acquisition de la position et les consignes générées en conséquence, en étant directement branché à celui-ci via le port USB de l'ordinateur. Les validations attendues étaient: acquisition de la position cohérente par rapport à la position réelle, consignes moteurs cohérentes par rapport au comportement attendu, et mise en défaut automatique du système à la fin de la séquence de vol.
  </p>
  <p>
      La méthodologie adoptée pour cet essai reposait sur plusieurs étapes. Le système volant a d'abord été alimenté de manière autonome, sans connexion au sol. Ensuite, les hélices ont été retirées afin de garantir la sécurité des opérateurs et du matériel. L'ESP32-WROOM-32 a été relié à un ordinateur afin d'observer l'évolution des commandes envoyées vers le contrôleur de vol sur le moniteur série. Les trois balises ESP32 UWB DW1000 ont été placées au sol et configurées. Une séquence de vol a ensuite été définie puis initiée par l'opérateur qui a déplacé le drone manuellement selon la trajectoire et les étapes du vol.
  </p>
  <p>
      Après avoir effectué l'essai, l'interprétation des résultats a montré que tous les critères de performance ont été correctement respectés. Les consignes envoyées par L'ESP32-WROOM-32 étaient cohérentes et fiables. Les différentes phases de vol ont été bien respectées et les consignes envoyées aux moteurs étaient cohérentes, avec les moteurs commençant à tourner uniquement au moment où le signal d'armement s'enclenchait. La séquence qui s'en est suivie était une succession de différentes phases de vol: démarrage linéaire des moteurs, montée avec accélération puis ralentissement, stabilisation, descente avec respect du plafond minimal, et arrêt progressif et linéaire des moteurs une fois le sol atteint.
  </p>

  <h2>Test d'une séquence de vol complète avec hélices et en mode semi-automatique</h2>
  <p>
      L'objectif de l'essai était de tester le fonctionnement du module automatique pour une séquence de vol complète sans déplacement horizontal (montée, stabilisation, descente) avec hélices. La particularité de ce test était que seule la commande de poussée était automatisée tandis que l'ensemble des autres commandes de tangage, roulis et lacet étaient laissés à la charge de l'opérateur. Les validations attendues étaient: respect du plan de vol et consignes moteurs cohérentes par rapport au comportement attendu.
  </p>
  <p>
      La méthodologie adoptée pour cet essai reposait sur plusieurs étapes. Le système volant a d'abord été alimenté de manière autonome, sans connexion au sol. Ensuite, les hélices ont été placées sur le système volant. L'ESP32-WROOM-32 a transmis via WiFi à l'ordinateur les données essentielles de positionnement afin d'observer si l'évolution du système était correcte au cours du vol. Les trois balises ESP32 UWB DW1000 ont été placées au sol et configurées. Une séquence de vol a ensuite été définie puis initiée par l'opérateur.
  </p>
  <p>
      Après avoir effectué l'essai, l'interprétation des résultats a montré que tous les critères de performance ont été correctement respectés. La séquence de vol a bien été respectée malgré le faible niveau de batterie qui a empêché le système de décoller davantage.
  </p>
