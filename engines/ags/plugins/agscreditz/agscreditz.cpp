/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#include "ags/plugins/agscreditz/agscreditz.h"

namespace AGS3 {
namespace Plugins {
namespace AgsCreditz {

AgsCreditz::AgsCreditz() {
	DLL_METHOD(AGS_GetPluginName);
	DLL_METHOD(AGS_EngineStartup);
}

const char *AgsCreditz::AGS_GetPluginName() {
	return "agsCreditz v1.1 by AJA";
}

void AgsCreditz::AGS_EngineStartup(IAGSEngine *engine) {
	SCRIPT_METHOD(SetCredit);
	SCRIPT_METHOD(ScrollCredits);
	SCRIPT_METHOD(GetCredit);
	SCRIPT_METHOD(IsCreditScrollingFinished);
	SCRIPT_METHOD(SetCreditImage);
	SCRIPT_METHOD(PauseScroll);
	SCRIPT_METHOD(ScrollReset);
	SCRIPT_METHOD(SetEmptyLineHeight);
	SCRIPT_METHOD(GetEmptyLineHeight);
	SCRIPT_METHOD(SetStaticCredit);
	SCRIPT_METHOD(GetStaticCredit);
	SCRIPT_METHOD(StartEndStaticCredits);
	SCRIPT_METHOD(GetCurrentStaticCredit);
	SCRIPT_METHOD(SetDefaultStaticDelay);
	SCRIPT_METHOD(SetStaticPause);
	SCRIPT_METHOD(SetStaticCreditTitle);
	SCRIPT_METHOD(ShowStaticCredit);
	SCRIPT_METHOD(StaticReset);
	SCRIPT_METHOD(GetStaticCreditTitle);
	SCRIPT_METHOD(SetStaticCreditImage);
	SCRIPT_METHOD(IsStaticCreditsFinished);
}

void AgsCreditz::SetCredit(const ScriptMethodParams &params) {
	PARAMS7(int, ID, string, credit, int, colour, int, font, int, center, int, xpos, int, generateoutline);
}

void AgsCreditz::ScrollCredits(const ScriptMethodParams &params) {
	PARAMS7(int, onoff, int, speed, int, fromY, int, toY, int, isautom, int, wait, int, res);
}

string AgsCreditz::GetCredit(const ScriptMethodParams &params) {
	PARAMS1(int, ID);
	return nullptr;
}

int AgsCreditz::IsCreditScrollingFinished(const ScriptMethodParams &params) {
	return true;
}

void AgsCreditz::SetCreditImage(const ScriptMethodParams &params) {
	PARAMS5(int, ID, int, Slot, int, center, int, xpos, int, pixtonext);
}

void AgsCreditz::PauseScroll(const ScriptMethodParams &params) {
	PARAMS1(int, onoff);
}

void AgsCreditz::ScrollReset(const ScriptMethodParams &params) {
}

void AgsCreditz::SetEmptyLineHeight(const ScriptMethodParams &params) {
	PARAMS1(int, Height);
}

int AgsCreditz::GetEmptyLineHeight(const ScriptMethodParams &params) {
	return 0;
}

void AgsCreditz::SetStaticCredit(const ScriptMethodParams &params) {
	PARAMS8(int, ID, int, x, int, y, int, creditfont, int, creditcolour, int, centered, int, generateoutline, string, credit);

}

string AgsCreditz::GetStaticCredit(const ScriptMethodParams &params) {
	PARAMS1(int, ID);
	return nullptr;
}

void AgsCreditz::StartEndStaticCredits(const ScriptMethodParams &params) {
	PARAMS2(int, onoff, int, res);
}

int AgsCreditz::GetCurrentStaticCredit(const ScriptMethodParams &params) {
	return 0;
}

void AgsCreditz::SetDefaultStaticDelay(const ScriptMethodParams &params) {
	PARAMS1(int, Cyclesperchar);
}

void AgsCreditz::SetStaticPause(const ScriptMethodParams &params) {
	PARAMS2(int, ID, int, length);
}

void AgsCreditz::SetStaticCreditTitle(const ScriptMethodParams &params) {
	PARAMS8(int, ID, int, x, int, y, int, titlefont, int, titlecolour, int, centered, int, generateoutline, string, title);
}

void AgsCreditz::ShowStaticCredit(const ScriptMethodParams &params) {
	PARAMS6(int, ID, int, time, int, style, int, transtime, int, sound, int, resolution);
}

void AgsCreditz::StaticReset(const ScriptMethodParams &params) {
}

string AgsCreditz::GetStaticCreditTitle(const ScriptMethodParams &params) {
	PARAMS1(int, ID);
	return nullptr;
}

void AgsCreditz::SetStaticCreditImage(const ScriptMethodParams &params) {
//int ID, int x, int y, int Slot, int Hcentered, int Vcentered, int time) {
}

int AgsCreditz::IsStaticCreditsFinished(const ScriptMethodParams &params) {
	return true;
}

} // namespace AgsCreditz
} // namespace Plugins
} // namespace AGS3