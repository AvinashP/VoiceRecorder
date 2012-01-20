//
//  VoiceRecordAppDelegate.h
//  VoiceRecord
//
//  Created by Avinash on 10/5/10.
//  Copyright PocketPpl 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class VoiceRecordViewController;

@interface VoiceRecordAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    VoiceRecordViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet VoiceRecordViewController *viewController;

@end

