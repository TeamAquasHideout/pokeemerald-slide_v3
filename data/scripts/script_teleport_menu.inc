TeleportMenu::
    lockall
    multichoicedefault 0, 0, MULTI_YESNO, 0, 1
    switch VAR_RESULT
    case 0, TP_Yes
    case 1, TP_No
    release
    end

TP_Yes::
    call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, FixRivalSoftlock
    fadescreen FADE_TO_BLACK
    special SetCB2WhiteOut2
    waitstate
    release
    end

TP_No::
    release
    end

FixRivalSoftlock::
    setvar VAR_LITTLEROOT_RIVAL_STATE, 1
    return
