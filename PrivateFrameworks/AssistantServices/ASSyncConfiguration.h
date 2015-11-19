/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistant_service
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistant_service/AFSyncConfiguration.h>

@class NSString, NSData;

@interface ASSyncConfiguration : NSObject <AFSyncConfiguration> {

	NSString* _syncKey;
	NSData* _configPlistData;
	char _attemptedPlistOpen;

}
-(id)initWithConfigurationPlistForSyncKey:(id)arg1 ;
-(void)_tryGettingPlistData;
-(id)configurationInfoForKey:(id)arg1 ;
-(id)init;
@end

