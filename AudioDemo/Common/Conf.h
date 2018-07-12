//
//  Conf.h
//  AudioDemo
//
//  Created by njim3 on 01/02/2018.
//  Copyright © 2018 cnbmsmart. All rights reserved.
//

#ifndef Conf_h
#define Conf_h

#define DOCUMENT_PATH                   [NSSearchPathForDirectoriesInDomains(   \
                                            NSDocumentDirectory, NSUserDomainMask, \
                                            YES) objectAtIndex: 0]

#define AUDIO_FOLDER_NAME               @"audios"

#define AUDIO_FOLDER_PATH               [DOCUMENT_PATH stringByAppendingPathComponent:  \
                                            AUDIO_FOLDER_NAME]

#define CELLIDENTIFIER_AUDIOLISTVC      @"AudioListCellIdentifier"
#define HEIGHT_AUDIOLIST_TV             70.0f

#define SEGUE_AUDIOLIST2PLAYAUDIO       @"SEGUEAUDIOLIST2PLAYAUDIO"


#endif /* Conf_h */
