/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:46:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsPlistSource.h>

@class CFPDSource;

@interface CFPrefsDirectSource : CFPrefsPlistSource {

	CFPDSource* _underlyingSource;
	unsigned long long _inode;
	char _managed;

}
-(char)managed;
-(void)sendFullyPreparedMessage:(id)arg1 settingValue:(void*)arg2 forKey:(CFStringRef)arg3 retryCount:(int)arg4 ;
-(id)createRequestNewContentMessageForDaemon:(char)arg1 ;
-(unsigned char)alreadylocked_requestNewData;
-(void)setManaged:(char)arg1 ;
-(void*)copyReplyForDirectMessage:(id)arg1 error:(char*)arg2 ;
-(void)dealloc;
-(char)sendMessage:(id)arg1 ;
@end

