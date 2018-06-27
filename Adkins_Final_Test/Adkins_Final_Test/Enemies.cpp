// Including standard libraries
#include "stdafx.h"

// Including header file
#include "Header.h"

// // // // //
// 
// Enemies
//
// // // // // 

// Enemy class
class Enemy
{
	// Public data members
public:
	Enemy();
	void Attack() const;

// Protected data members
protected:
	int m_Damage;
};

// Setting enemy damage
Enemy::Enemy() :
	m_Damage(10)
{
}

// Enemy attack 
void Enemy::Attack() const
{
	// Printing the damage inflicted by the attack
	cout << "Attack inflicts " << m_Damage << " damage points!\n";
}

// Boss "child" class 
class Boss : public Enemy
{
	// Public data member
public:
	Boss();
	void SpecialAttack() const;

	// Private data member
private:
	int m_DamageMultiplier;
};

// Multipliying the normal amount fo damage by 3
Boss::Boss() :
	m_DamageMultiplier(3)
{}

// Boss Special Attack
void Boss::SpecialAttack() const
{
	// Printing the damage inflicted by the attack
	cout << "Special Attack inflicts " << (m_DamageMultiplier * m_Damage);
	cout << " damage points!\n";

}

/// Enemy Function
void enemies()
{
	// Printing the attack information
	cout << "\nYou are being attacked by a zombie!\n";
	Enemy enemy1;
	enemy1.Attack();

	// Printing attack
	cout << "You grab your pocket knife and slash at the monster.\n";

	// Return to ensure program completion
	return;
}

/// Boss Function
void boss()
{
	// Printing the attack information
	cout << "\nYou are being attacked by a wraith!\n";
	Boss boss1;
	boss1.Attack();
	boss1.SpecialAttack();

	// Printing attack
	cout << "You grab your pocket knife and slash at the monster.\n";


	// Return to ensure program completion
	return;
}
