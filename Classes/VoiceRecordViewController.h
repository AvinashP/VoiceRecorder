//
//  VoiceRecordViewController.h
//  VoiceRecord
//
//  Created by Avinash on 10/5/10.
//  Copyright PocketPpl 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>

@interface VoiceRecordViewController : UIViewController <AVAudioRecorderDelegate>
{
	IBOutlet UIProgressView *progressView;
	IBOutlet UILabel *lblStatusMsg;
	
	NSMutableDictionary *recordSetting;
	NSMutableDictionary *editedObject;
	NSString *recorderFilePath;
	AVAudioRecorder *recorder;
	
	SystemSoundID soundID;
	NSTimer *timer;
}

- (IBAction) startRecording;
- (IBAction) stopRecording;
- (IBAction)playSound;
- (void) handleTimer;

@end

