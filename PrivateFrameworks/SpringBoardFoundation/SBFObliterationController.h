/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@interface SBFObliterationController : NSObject
+(id)sharedInstance;
-(void)_doObliterateWithType:(CFStringRef)arg1 showingProgress:(char)arg2 options:(id)arg3 ;
-(void)wipeAndBrickShowingProgress:(char)arg1 ;
-(void)obliterateDataPartitionShowingProgress:(char)arg1 skipDataObliteration:(char)arg2 ;
-(void)markObliterationStart;
@end

