#include <iostream>

void heaven(){
    std::string passage = "Behold the angel of God, who comes down to us,\n"
                         "So filled with joy in his countenance,\n"
                         "That never did I see such beauty in any smile.\n"
                         "\n"
                         "And lo! all those who with him came,\n"
                         "Turned their bright eyes upon him, and made me\n"
                         "So much the more desire to know the truth.";

    std::cout << passage << std::endl;

};

void suicide_punishement(){
    std::cout << "\n\nHere the repellent harpies make their nests," << std::endl;
    std::cout << "Who drove the Trojans from the Strophades" << std::endl;
    std::cout << "With dire announcements of the coming woe." << std::endl;
    std::cout << "They have broad wings, a human neck and face," << std::endl;
    std::cout << "Clawed feet and swollen, feathered bellies; they caw" << std::endl;
    std::cout << "Their lamentations in the eerie trees" << std::endl;
};

void lust_punishement(){
    std::cout << "Here, the carnal sinners were punished," << std::endl;
    std::cout << "Those who were overpowered by the flesh," << std::endl;
    std::cout << "Its cravings, and its pleasures." << std::endl << std::endl;
    std::cout << "And, behold, all were lost in a black storm," << std::endl;
    std::cout << "That screamed as if with pain, so that the ear" << std::endl;
    std::cout << "Could not endure the agony of it." << std::endl << std::endl;
};

void greed_punishement(){
    std::cout << "Here, in the fourth circle, I saw" << std::endl;
    std::cout << "The sad souls of those who lived for greed;" << std::endl;
    std::cout << "They hoard, and now must spend eternity" << std::endl;
    std::cout << "Pushing heavy weights with angry, bitter force." << std::endl << std::endl;

};
void anger_punishement(){
    std::cout << "Here, in the fourth circle, I saw" << std::endl;
    std::cout << "The sad souls of those who lived with anger;" << std::endl;
    std::cout << "They push a heavy weight, forever bound" << std::endl;
    std::cout << "To rage against the forces that oppose them." << std::endl;

};

void purgatory(){
    std::cout << "Welcome to the medium place\n";
    exit(0);
};

void death(int goodness, int malice, int lust, int anger, int greed){
    std::cout << "###########################\n";
    std::cout << "Goodness " << goodness <<  std::endl;
    std::cout << "Malice " << malice <<  std::endl;
    std::cout << "Greed " << greed <<  std::endl;
    std::cout << "Anger " << anger <<  std::endl;
    std::cout << "Lust " << lust <<  std::endl;
    std::cout << "###########################\n";

    if (goodness == malice){
         purgatory();
    };

    if (goodness >= malice){
        heaven();
    }
    else {
        if (lust > anger && lust > greed){
            lust_punishement();
        }
        else if (greed > anger){
            greed_punishement();
        }
        else{
            anger_punishement();
        }
    };
    exit(0);
};


int main()
{

    int goodness = 0;
    int malice = 0;
    int lust = 0;
    int anger = 0;
    int greed = 0;
    int start_game;
    bool feed_cat=false; 
    int start_game_counter = 0;
    int choice;
    bool second_cat=false;
    bool like_woman=false;
    bool lend_woman=false;
    bool lend_woman2 = false;
    bool demand_money= false;
    bool get_intrest_rate = false;

    std::cout << "We make Hell real; we stoke its fires.\n" << "And in its flames our hope expires.\n"<<
    "Heaven,too, is merely our creation.\nWe can grant ourselves our own salvation.\n"<<
     "All that’s required is imagination.\n\n";

    std::cout << "Hello human, in this game you have to make simple choices and face "
   << "the consequences fo these choices\n";



    while (start_game != 1 && start_game_counter < 3){
            std::cout << "Would you like to play the game? 1 for yes and 2 for No\n";
            std::cin >> start_game;
            start_game_counter+= 1;
    };
    if (start_game != 1 && start_game_counter == 3){
        std::cout << "We cant choose to live life. but we can choose to lose it." <<
        "Would you like to lose ? 1 for yes and 2 for No\n";
        std::cin >> choice;

        if (choice == 1){
            suicide_punishement();
        }
    }

    std::cout << "A cat approched you meowing for food. Would you like to :\n"
    << "1) Feed the cat\n" << "2) ignore the cat\n" << "3)Kick the cat away\n";

    std::cin >> choice;
    switch(choice){
        case 1:
            goodness += 1;
            feed_cat = true;
            break;
        case 3:
            malice += 1;
            anger += 1;
            break;    
    };


    // Feed the cat route
    if (feed_cat){
        std::cout << "You dont have food in the house.\n" << "1) Buy food for the cat\n" << "2) Ignore the cat\n";
        std::cin >> choice;

        if (choice  == 1){
            goodness += 3;
            std::cout << "Now the cat lives with you!\n";

        };
        std::cout << "a beautiful woman saw you with the cat and is approaching you\n";
        std::cout << "The beautiful woman is travelling away and want you to take care of her cat\n";
        std::cout << "1)Accept\n" << "2)Refuse\n";
        std::cin >> choice;
        if (choice==1){
            goodness += 1;
            second_cat = true;
            };
        if (second_cat){
                    std::cout << "The woman came back from her travels. She thanks you for taking her for the cat\n";
                    std::cout << "What is your answer for her?\n" << "1) I like cats anyway\n" << "2)I did it for you\n"
                    << "3)I would like to pay me\n";
                    std::cin >> choice;
                    switch(choice){
                case 1:
                    goodness += 1;
                    break;
                case 2:
                    like_woman = true;
                    break;
                case 3:
                    malice += 1;
                    greed += 1;
                    break;
                                 };
                    

                         };
        if (like_woman){
            std::cout << "The woman rejects you";
            std::cout << ".What would you do\n" << "1)Move on\n" << "2)Get Angry and screem at her\n";
            std::cin >> choice;
            if (choice == 2){
                malice += 1;
                anger += 5;
            };
        };                    

    };

// The woman is ascking for money route
std::cout << "The woman cat owner approches you.\n" << "She is in a huge debt and want to borrow money from you\n";
std::cout << "1) Yes. I will lend you money\n" << "2) Yes I will lend you money on one condition.\n" << 
"3) No I cant";
std::cin >> choice;
switch (choice)
{
case 1:
    goodness += 1;
    lend_woman = true;
    if (like_woman){
        malice -= 1;
    };
    break;
case 2:
    lend_woman = true;
    lend_woman2=true;

case 3:
    if (like_woman){
        malice += 1;
        anger += 1;
    };    
default:
    break;
};

if (lend_woman2){
    std::cout << "The condition is: \n" << "1)sleep with me.\n" << "2)Lend you with intrest rate of 10%\n";
    std::cin >> choice;
    if (choice == 1){
        malice += 1;
        lust += 2;
        if (like_woman){
            lust += 2;
        };}
    else {
        greed += 1;
    }; 
    
    std::cout << "The woman rejects you offer\n";
   
    std::cout << "Force yourself on woman?.\n" << "1) Yes\n2) No\n";
    std::cin >> choice;

    if(choice==1){
        malice += 10;
        anger += 3;
        lust += 5;

        std::cout << "You tried to force yourself on the womand and she fought you off and killed you;";
        death( goodness,  malice,  lust,  anger,  greed);

    
    }
}

while(lend_woman){
    std::cout << "The woman cannot give you your money back?" << "what would you do ?\n";
    std::cout << "1) Forgive her. you dont need the money\n" << "2) Be patient\n" << "3)Demand you money";
    std::cin >> choice;
    
    switch (choice)
    {
    case 1:
        goodness += 5;
        lend_woman = false;
        break;
    
    case 2:
        goodness += 1;
        break;
    case 3:
        demand_money=true;
        lend_woman = false;

    };


};

if (demand_money){
    std::cout << "The woman cannot pay you back now\n" << "She offers you her body in exchange od money\n";
    std::cout << "What would you do ?" << "1) Accept\n2) Refuse\n";
    std::cin >> choice;
    if (choice == 1){
        lust += 5;
    } 
    else {
        get_intrest_rate = true;
    }
};

if (get_intrest_rate && demand_money){
    std::cout << "The woman offers you 10% Intrest rate";
    std::cout << "What would you do ?" << "1) Accept\n2) Demand more\n" << "3) forgive the woman\n" <<
     "4) Tell her to give you the money when she have it";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        greed += 1;
        break;
    case 2:
        malice += 1;
        greed += 5;
        break;
    case 3:
        goodness += 5;
        break;        
    
    case 4:
        goodness+= 1;
        break;
    }

};


if (goodness > malice){
    std::cout << "You lived a long happy life. and died surrounded by you loved ones\n";
}
else{
    if (greed > 2){
        std::cout << "You were rich and had a lot of money";
    }
    std::cout << "You lived a miserable sad life and died alone";
}


//ending 
death( goodness,  malice,  lust,  anger,  greed);

}
