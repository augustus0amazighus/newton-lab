#include <iostream>
#include <cmath> // For mathematical operations

// Structure for Linear Motion
struct Motion {
    double Vi, t, a, Vf, d; // Initial velocity, time, acceleration, final velocity, and distance
};

// Structure for Angular Motion
struct AngularMotion {
    double r, v, dw, w, I, m, ac, aw, Fc, p; // Radius, velocity, angular acceleration, angular velocity, etc.
};

// Structure for Energy and Force
struct PowerMotion {
    double ke, m, v, pe, g, h, tme, w, t, p, f, d, the, q, c, dt, e,a, k, x; // Variables for energy and force
};

int main() {
    int choice, calc,language;                // Main choice and calculation choice
    Motion motion;                   // Linear motion variables
    AngularMotion amotion;           // Angular motion variables
    PowerMotion pmotion;             // Energy and force variables

 
    std::cout << "WELCOME TO THE NEWTON LAB (; \n";
    std::cout << "Choose a field:\n";
    std::cout << "1_ Linear motion\n";
    std::cout << "2_ Circular motion\n";
    std::cout << "3_ Energy and force\n";
    std::cin >> choice;

    switch (choice) {
        // --- Linear Motion Calculations ---
case 1:
    std::cout << "Linear Motion:\n";
    std::cout << "1_ First law\n";
    std::cout << "2_ Distance\n";
    std::cout << "3_ Final speed\n";
    std::cout << "4_ Acceleration\n";
    std::cout << "5_ Definitions\n";
    std::cin >> calc;

    switch (calc) {
        case 1:
            std::cout << "The first law of motion: F = m * a\n";

        case 2:
            // Distance formula: d = Vi * t + 0.5 * a * t^2
            std::cout << "Enter initial velocity (Vi), time (t), and acceleration (a): ";
            std::cin >> motion.Vi >> motion.t >> motion.a;
            motion.d = motion.Vi * motion.t + 0.5 * motion.a * (motion.t * motion.t);
            std::cout << "Distance: " << motion.d << " meters\n";
            break;

        case 3:
            // Final velocity formula: Vf = Vi + a * t
            std::cout << "Enter initial velocity (Vi), time (t), and acceleration (a): ";
            std::cin >> motion.Vi >> motion.t >> motion.a;
            motion.Vf = motion.Vi + motion.a * motion.t;
            std::cout << "Final Speed: " << motion.Vf << " m/s\n";
            break;

        case 4:
            // Acceleration formula: a = (Vf - Vi) / t
            std::cout << "Enter initial velocity (Vi), final velocity (Vf), and time (t): ";
            std::cin >> motion.Vi >> motion.Vf >> motion.t;
            motion.a = (motion.Vf - motion.Vi) / motion.t;
            std::cout << "Acceleration: " << motion.a << " m/s^2\n";
            break;

        case 5:
        
            std::cout << "Choose language (0 for English, 1 for French): ";
            std::cin >> language;

            if (language == 0) { // English Definitions
                std::cout << "\n--- Definitions (English) ---\n";

                std::cout << "1. Newton's First Law of Motion:\n";
                std::cout << "   - Definition: An object at rest will stay at rest, and an object in motion will stay in motion unless acted upon by an external force.\n";
                std::cout << "   - Formula: F = m * a (where F is force, m is mass, and a is acceleration).\n";
                std::cout << "   - Example: A car will continue to move at constant speed unless the brakes (external force) are applied.\n\n";

                std::cout << "2. Distance (d):\n";
                std::cout << "   - Definition: The total length of the path traveled by an object, irrespective of direction.\n";
                std::cout << "   - Formula: d = Vi * t + 0.5 * a * t^2 (where Vi is initial velocity, a is acceleration, and t is time).\n";
                std::cout << "   - Example: If a car starts from rest (Vi = 0), accelerates at 2 m/s² for 5 seconds, the distance traveled is: d = 0 * 5 + 0.5 * 2 * 5^2 = 25 meters.\n\n";

                std::cout << "3. Final Speed (Vf):\n";
                std::cout << "   - Definition: The speed of an object at a given moment after a period of time.\n";
                std::cout << "   - Formula: Vf = Vi + a * t (where Vi is initial velocity, a is acceleration, and t is time).\n";
                std::cout << "   - Example: A car starts from rest (Vi = 0) and accelerates at 3 m/s² for 10 seconds. The final speed is: Vf = 0 + 3 * 10 = 30 m/s.\n\n";

                std::cout << "4. Acceleration (a):\n";
                std::cout << "   - Definition: The rate at which the velocity of an object changes over time.\n";
                std::cout << "   - Formula: a = (Vf - Vi) / t (where Vf is final velocity, Vi is initial velocity, and t is time).\n";
                std::cout << "   - Example: If a car accelerates from 0 to 20 m/s in 10 seconds, the acceleration is: a = (20 - 0) / 10 = 2 m/s².\n\n";
            } else { // French Definitions
                std::cout << "\n--- Définitions (Français) ---\n";

                std::cout << "1. Première loi de Newton (Loi de l'inertie):\n";
                std::cout << "   - Définition: Un objet au repos restera au repos, et un objet en mouvement restera en mouvement à moins d'une force externe.\n";
                std::cout << "   - Formule: F = m * a (où F est la force, m est la masse, et a est l'accélération).\n";
                std::cout << "   - Exemple: Une voiture continuera à rouler à une vitesse constante à moins que les freins (force externe) ne soient appliqués.\n\n";

                std::cout << "2. Distance (d):\n";
                std::cout << "   - Définition: La longueur totale du trajet parcouru par un objet, indépendamment de la direction.\n";
                std::cout << "   - Formule: d = Vi * t + 0.5 * a * t^2 (où Vi est la vitesse initiale, a est l'accélération, et t est le temps).\n";
                std::cout << "   - Exemple: Si une voiture part de zéro (Vi = 0) et accélère à 2 m/s² pendant 5 secondes, la distance parcourue sera: d = 0 * 5 + 0.5 * 2 * 5^2 = 25 mètres.\n\n";

                std::cout << "3. Vitesse finale (Vf):\n";
                std::cout << "   - Définition: La vitesse d'un objet à un instant donné après une période de temps.\n";
                std::cout << "   - Formule: Vf = Vi + a * t (où Vi est la vitesse initiale, a est l'accélération, et t est le temps).\n";
                std::cout << "   - Exemple: Une voiture part de zéro (Vi = 0) et accélère à 3 m/s² pendant 10 secondes. La vitesse finale est: Vf = 0 + 3 * 10 = 30 m/s.\n\n";

                std::cout << "4. Accélération (a):\n";
                std::cout << "   - Définition: Le taux auquel la vitesse d'un objet change au fil du temps.\n";
                std::cout << "   - Formule: a = (Vf - Vi) / t (où Vf est la vitesse finale, Vi est la vitesse initiale, et t est le temps).\n";
                std::cout << "   - Exemple: Si une voiture accélère de 0 à 20 m/s en 10 secondes, l'accélération est: a = (20 - 0) / 10 = 2 m/s².\n\n";
            }
            break;

        default:
            std::cout << "stupid >_< , try again.\n";
    }
    break;


        case 2:
    std::cout << "Circular Motion:\n";
    std::cout << "1_ Calculate angular acceleration\n";
    std::cout << "2_ Calculate centripetal acceleration\n";
    std::cout << "3_ Calculate centripetal force\n";
    std::cout << "4_ Linear and angular velocity\n";
    std::cout << "5_ Angular velocity\n";
    std::cout << "6_ Calculate torque\n";
    std::cout << "7_ Period\n";
    std::cout << "8_ Definitions\n";
    std::cin >> calc;

    switch (calc) {
        case 1:
            // Angular acceleration input (dw = (w - wi) / t)
            // We assume dw is the angular acceleration, anduser provides w and wi to compute the change.
            std::cout << "Enter initial angular velocity (wi) and final angular velocity (w): ";
            std::cin >> amotion.w >> amotion.dw;
            // Angular acceleration = (final velocity - initial velocity)
            amotion.dw = amotion.w - amotion.dw;
            std::cout << "Angular Acceleration (dw): " << amotion.dw << " rad/s^2\n";
            break;

        case 2:
            // Centripetal acceleration formula: ac = v^2 / r
            std::cout << "Enter velocity (v) and radius (r): ";
            std::cin >> amotion.v >> amotion.r;
            amotion.ac = (amotion.v * amotion.v) / amotion.r;
            std::cout << "Centripetal Acceleration (ac): " << amotion.ac << " m/s^2\n";
            break;

        case 3:
            // Centripetal force formula: Fc = m * v^2 / r
            std::cout << "Enter velocity (v), mass (m), and radius (r): ";
            std::cin >> amotion.v >> amotion.m >> amotion.r;
            amotion.Fc = (amotion.m * (amotion.v * amotion.v)) / amotion.r;
            std::cout << "Centripetal Force (Fc): " << amotion.Fc << " N\n";
            break;

        case 4:
            // Linear and angular velocity formula: v = w * r
            std::cout << "Enter angular velocity (w) and radius (r): ";
            std::cin >> amotion.w >> amotion.r;
            amotion.v = amotion.w * amotion.r;
            std::cout << "Linear velocity (v): " << amotion.v << " m/s\n";
            break;

        case 5:
            // Angular velocity formula: w = v / r
            std::cout << "Enter linear velocity (v) and radius (r): ";
            std::cin >> amotion.v >> amotion.r;
            amotion.w = amotion.v / amotion.r;
            std::cout << "Angular velocity (w): " << amotion.w << " rad/s\n";
            break;

        case 6:
            // Calculate torque formula: T = I * dw
            std::cout << "Enter moment of inertia (I) and angular acceleration (dw): ";
            std::cin >> amotion.I >> amotion.dw;
            amotion.p = amotion.I * amotion.dw;
            std::cout << "Torque (T): " << amotion.p << " Nm\n";
            break;

        case 7:
            // Period formula: T = 2 * pi / w
            std::cout << "Enter angular velocity (w): ";
            std::cin >> amotion.w;
            amotion.p = 2 * M_PI / amotion.w;
            std::cout << "Period (T): " << amotion.p << " seconds\n";
            break;

        case 8:
            // Display definitions in English and French
            bool language;
            std::cout << "Choose language (0 for English, 1 for French): ";
            std::cin >> language;

            if (language == 0) { // English Definitions
                std::cout << "\n--- Definitions (English) ---\n";

                std::cout << "1. Angular Velocity:\n";
                std::cout << "   - Definition: The rate of change of angular displacement over time.\n";
                std::cout << "   - Formula: ω = θ / t, where θ is the angular displacement and t is time.\n";
                std::cout << "   - Example: A wheel rotating at 10 radians per second has an angular velocity of 10 rad/s.\n\n";

                std::cout << "2. Centripetal Force:\n";
                std::cout << "   - Definition: The inward force required to keep an object moving in a circular path.\n";
                std::cout << "   - Formula: Fc = m * v^2 / r, where m is mass, v is velocity, and r is the radius.\n";
                std::cout << "   - Example: A car turning on a curved road experiences centripetal force due to friction.\n\n";

                std::cout << "3. Torque:\n";
                std::cout << "   - Definition: The rotational equivalent of force; it causes objects to rotate around an axis.\n";
                std::cout << "   - Formula: τ = F * r * sin(θ), where F is force, r is the radius, and θ is the angle between F and r.\n";
                std::cout << "   - Example: Using a wrench to tighten a bolt applies torque to the bolt.\n\n";

                std::cout << "4. Angular Acceleration:\n";
                std::cout << "   - Definition: The rate of change of angular velocity over time.\n";
                std::cout << "   - Formula: α = Δω / Δt, where Δω is the change in angular velocity and Δt is time.\n";
                std::cout << "   - Example: A spinning fan slowing down experiences negative angular acceleration.\n\n";

                std::cout << "5. Centripetal Acceleration:\n";
                std::cout << "   - Definition: The acceleration directed towards the center of a circular path.\n";
                std::cout << "   - Formula: ac = v^2 / r, where v is velocity and r is the radius of the circle.\n";
                std::cout << "   - Example: A ball tied to a string and swung in a circle experiences centripetal acceleration.\n";

            } else { // French Definitions
                std::cout << "\n--- Definitions (French) ---\n";

                std::cout << "1. Vitesse angulaire :\n";
                std::cout << "   - Définition : Le taux de variation du déplacement angulaire au fil du temps.\n";
                std::cout << "   - Formule : ω = θ / t, où θ est le déplacement angulaire et t est le temps.\n";
                std::cout << "   - Exemple : Une roue tournant à 10 radians par seconde a une vitesse angulaire de 10 rad/s.\n\n";

                std::cout << "2. Force centripète :\n";
                std::cout << "   - Définition : La force dirigée vers l'intérieur nécessaire pour maintenir un objet en mouvement sur une trajectoire circulaire.\n";
                std::cout << "   - Formule : Fc = m * v^2 / r, où m est la masse, v est la vitesse, et r est le rayon.\n";
                std::cout << "   - Exemple : Une voiture prenant un virage subit une force centripète due à la friction.\n\n";

                std::cout << "3. Couple (Torque) :\n";
                std::cout << "   - Définition : L'équivalent rotationnel d'une force; il provoque la rotation d'un objet autour d'un axe.\n";
                std::cout << "   - Formule : τ = F * r * sin(θ), où F est la force, r est le rayon, et θ est l'angle entre F et r.\n";
                std::cout << "   - Exemple : Utiliser une clé pour serrer un boulon applique un couple au boulon.\n\n";

                std::cout << "4. Accélération angulaire :\n";
                std::cout << "   - Définition : Le taux de variation de la vitesse angulaire au fil du temps.\n";
                std::cout << "   - Formule : α = Δω / Δt, où Δω est le changement de vitesse angulaire et Δt est le temps.\n";
                std::cout << "   - Exemple : Un ventilateur en rotation qui ralentit subit une accélération angulaire négative.\n\n";

                std::cout << "5. Accélération centripète :\n";
                std::cout << "   - Définition : L'accélération dirigée vers le centre d'une trajectoire circulaire.\n";
                std::cout << "   - Formule : ac = v^2 / r, où v est la vitesse et r est le rayon du cercle.\n";
                std::cout << "   - Exemple : Une balle attachée à une ficelle et balancée en cercle subit une accélération centripète.\n";
            }
            break;

        default:
            std::cout << "stupid >_< , enter a number between 1 and 8.\n";
    }
    break;
        
        // --- Energy and Force Calculations ---
case 3:
    std::cout << "Energy and Force:\n";
    std::cout << "1_ Kinetic Energy\n";
    std::cout << "2_ Potential Energy\n";
    std::cout << "3_ Work\n";
    std::cout << "4_ Power\n";
    std::cout << "5_ Force\n";
    std::cout << "6_ Definitions\n";
    std::cin >> calc;

    switch (calc) {
        case 1:
           
            std::cout << "Enter mass (m) and velocity (v): ";
            std::cin >> pmotion.m >> pmotion.v;
            pmotion.ke = 0.5 * pmotion.m * std::pow(pmotion.v, 2); // Use std::pow for squaring
            std::cout << "Kinetic Energy (KE): " << pmotion.ke << " J\n";
            break;

        case 2:
            // Potential Energy formula: PE = m * g * h
            std::cout << "Enter mass (m), gravitational acceleration (g), and height (h): ";
            std::cin >> pmotion.m >> pmotion.g >> pmotion.h;
            pmotion.pe = pmotion.m * pmotion.g * pmotion.h;
            std::cout << "Potential Energy (PE): " << pmotion.pe << " J\n";
            break;

        case 3:
            // Work formula: W = F * d
            std::cout << "Enter force (F) and distance (d): ";
            std::cin >> pmotion.f >> pmotion.d;
            pmotion.w = pmotion.f * pmotion.d;
            std::cout << "Work (W): " << pmotion.w << " J\n";
            break;

        case 4:
            // Power formula: P = W / t
            std::cout << "Enter work (W) and time (t): ";
            std::cin >> pmotion.w >> pmotion.t;
            pmotion.p = pmotion.w / pmotion.t;
            std::cout << "Power (P): " << pmotion.p << " W\n";
            break;

        case 5:
            // Force formula: F = m * a
            std::cout << "Enter mass (m) and acceleration (a): ";
            std::cin >> pmotion.m >> pmotion.a;
            pmotion.f = pmotion.m * pmotion.a;
            std::cout << "Force (F): " << pmotion.f << " N\n";
            break;

        case 6:
            // Display definitions in English and French
            std::cout << "Choose language (0 for English, 1 for French): ";
            std::cin >> language;

            if (language == 0) { // English Definitions
                std::cout << "\n--- Definitions (English) ---\n";
                std::cout << "1. Kinetic Energy:\n";
                std::cout << "   - Definition: The energy possessed by an object due to its motion.\n";
                std::cout << "   - Formula: KE = 0.5 * m * v^2, where m is mass and v is velocity.\n";
                std::cout << "   - Example: A moving car has kinetic energy proportional to its speed and mass.\n\n";

                std::cout << "2. Potential Energy:\n";
                std::cout << "   - Definition: The energy stored in an object due to its position or height relative to a reference point.\n";
                std::cout << "   - Formula: PE = m * g * h, where m is mass, g is gravitational acceleration, and h is height.\n";
                std::cout << "   - Example: A book placed on a shelf has potential energy due to its height above the ground.\n\n";

                std::cout << "3. Work:\n";
                std::cout << "   - Definition: The process of transferring energy through the application of force over a distance.\n";
                std::cout << "   - Formula: W = F * d, where F is the force and d is the distance.\n";
                std::cout << "   - Example: Pushing a box across a floor involves doing work to overcome friction.\n\n";

                std::cout << "4. Power:\n";
                std::cout << "   - Definition: The rate at which work is done or energy is transferred.\n";
                std::cout << "   - Formula: P = W / t, where W is work and t is time.\n";
                std::cout << "   - Example: A light bulb consuming 60 watts of power transfers energy at a rate of 60 joules per second.\n\n";

                std::cout << "5. Energy Conservation:\n";
                std::cout << "   - Definition: The principle stating that energy cannot be created or destroyed, only transferred or transformed.\n";
                std::cout << "   - Example: A pendulum converts potential energy to kinetic energy and back as it swings.\n";
            } else { // French Definitions
                std::cout << "\n--- Definitions (French) ---\n";

                std::cout << "1. Énergie cinétique :\n";
                std::cout << "   - Définition : L'énergie possédée par un objet en raison de son mouvement.\n";
                std::cout << "   - Formule : Ec = 0,5 * m * v^2, où m est la masse et v est la vitesse.\n";
                std::cout << "   - Exemple : Une voiture en mouvement possède une énergie cinétique proportionnelle à sa vitesse et à sa masse.\n\n";

                std::cout << "2. Énergie potentielle :\n";
                std::cout << "   - Définition : L'énergie stockée dans un objet en raison de sa position ou de sa hauteur par rapport à un point de référence.\n";
                std::cout << "   - Formule : Ep = m * g * h, où m est la masse, g est l'accélération gravitationnelle, et h est la hauteur.\n";
                std::cout << "   - Exemple : Un livre posé sur une étagère possède une énergie potentielle due à sa hauteur par rapport au sol.\n\n";

                std::cout << "3. Travail :\n";
                std::cout << "   - Définition : Le processus de transfert d'énergie par l'application d'une force sur une distance.\n";
                std::cout << "   - Formule : W = F * d, où F est la force et d est la distance.\n";
                std::cout << "   - Exemple : Pousser une boîte sur un sol implique de faire un travail pour surmonter la friction.\n\n";

                std::cout << "4. Puissance :\n";
                std::cout << "   - Définition : Le taux auquel le travail est effectué ou l'énergie est transférée.\n";
                std::cout << "   - Formule : P = W / t, où W est le travail et t est le temps.\n";
                std::cout << "   - Exemple : Une ampoule consommant 60 watts de puissance transfère de l'énergie à un taux de 60 joules par seconde.\n\n";

                std::cout << "5. Conservation de l'énergie :\n";
                std::cout << "   - Définition : Le principe selon lequel l'énergie ne peut être ni créée ni détruite, mais seulement transférée ou transformée.\n";
                std::cout << "   - Exemple : Un pendule convertit l'énergie potentielle en énergie cinétique et inversement lorsqu'il oscille.\n";
            }
            break;

        default:
            std::cout << "stupid >_< , try again.\n";
    }
    break;


        default:
            std::cout << "stupid >_< , try again.\n";
    }

    return 0;
}
