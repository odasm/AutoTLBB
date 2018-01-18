#include "SkillTab.hpp"
#include "ui_SkillTab.h"

#include <QDebug>

#include "games_window/GameWindowInfo.hpp"

SkillTab::SkillTab(QWidget *parent) :
  TabAbstract(parent),
  ui(new Ui::SkillTab)
{
  ui->setupUi(this);
}

SkillTab::~SkillTab()
{
  delete ui;
}

void SkillTab::onGameWindowInfoPressed(const GameWindowInfo* gameWindowInfo)
{

}
