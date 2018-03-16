//////////////////////////////////////////////////
//
//  This work is licensed under the MIT license.
//  
//  You are free to copy, modify and distribute
//  this work freely given that proper attribution
//  is supplied and the author is not held liable.
//  See LICENSE for details.
//  
//  Copyright (c) 2016-2018 David "OmniTroid" Skoland
//
//////////////////////////////////////////////////

#ifndef AOEVIDENCEDISPLAY_H
#define AOEVIDENCEDISPLAY_H

#include <QLabel>
#include <QMovie>

#include "aoapplication.h"
#include "aosfxplayer.h"

class AOEvidenceDisplay : public QLabel
{
	Q_OBJECT

public:
	AOEvidenceDisplay(QWidget *p_parent, AOApplication *p_ao_app);

	void show_evidence(QString p_evidence_image, bool is_left_side, int p_volume);
	QLabel* get_evidence_icon();
	void reset();

private:
	AOApplication *ao_app;
	QMovie *evidence_movie;
	QLabel *evidence_icon;
	AOSfxPlayer *sfx_player;

private slots:
	void frame_change(int p_frame);
};

#endif // AOEVIDENCEDISPLAY_H
