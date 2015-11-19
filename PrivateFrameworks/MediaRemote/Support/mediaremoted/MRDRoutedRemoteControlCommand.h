/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <mediaremoted/MRDRemoteControlCommand.h>

@class NSString;

@interface MRDRoutedRemoteControlCommand : MRDRemoteControlCommand {

	NSString* _routedAppDisplayID;

}

@property (nonatomic,readonly) NSString * routedAppDisplayID;              //@synthesize routedAppDisplayID=_routedAppDisplayID - In the implementation block
-(id)initWithCommand:(id)arg1 routedApp:(id)arg2 ;
-(NSString *)routedAppDisplayID;
-(void)dealloc;
-(id)description;
@end

