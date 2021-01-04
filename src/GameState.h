#ifndef GAMESTATE
#define GAMESTATE
#include <stdint.h>

class GameState {
  private:
    void PrintChips();
    // number of players who need to get a chance to bet in this round


  public:
    GameState(char num_players, char num_rounds, float small_blind_multiplier, 
              double starting_bb_amounds);
    GameState(const GameState&);
    GameState& operator=(const GameState&);
    ~GameState();
    void TakeAction(double action);
    void PrintAction(double action);
    void UpdateNeedsCard();
    void UndoAction(char acted_player, double action, double old_max_bet, 
                    double old_min_raise, double old_pot_good, char old_round,
                    char old_betting_round, char old_all_in, double old_pot,
                    char old_num_left, bool old_is_done);

    double* chip_amounts_;
    bool* in_game_;
    // represents the amount each player has in the pot FOR THE WHOLE HAND
    double* total_bets_;
    char acting_player_;
    char current_round_;
    // minimum raise for this round
    double min_raise_;
    // maximum amount that has been put in by any individual, = call amount
    double max_bet_;
    double pot_;
    bool is_done_;
    char betting_round_;
    char num_players_;
    char num_rounds_;
    float small_blind_multiplier_;
    double starting_bb_amounts_;
    // number of players that are not folded or all in
    char num_left_;
    char num_all_in_;
    bool needs_card_;
    char pot_good_;
};

#endif
