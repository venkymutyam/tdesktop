/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Ui {
class GenericBox;
} // namespace Ui

namespace Window {
class SessionController;
} // namespace Window

namespace Data {
class ChatFilter;
} // namespace Data

void EditFilterBox(
	not_null<Ui::GenericBox*> box,
	not_null<Window::SessionController*> window,
	const Data::ChatFilter &filter,
	Fn<void(const Data::ChatFilter &)> doneCallback);