/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:46:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsSource.h>

@protocol OS_dispatch_group;
@class NSObject;

@interface CFPrefsPlistSource : CFPrefsSource {

	NSObject*<OS_dispatch_group> _synchGroup;
	CFStringRef userIdentifier;
	CFStringRef domainIdentifier;
	CFStringRef container;
	CFDictionaryRef _locallySetDict;
	const char* accessPath;
	struct {
		unsigned _isByHost : 1;
		unsigned _volatile : 1;
		unsigned _readonly : 1;
		unsigned _avoidsDaemonCache : 1;
		unsigned _restrictedAccess : 1;
		unsigned _checkedInvalidHome : 1;
		unsigned _lastWriteFailed : 1;
	}  _flags;

}
-(CFStringRef)userIdentifier;
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(CFArrayRef)alreadylocked_copyKeyList;
-(void)alreadylocked_clearCache;
-(long)sendMessageSettingValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)_goReadOnlyOrVolatileAfterTryingToWriteKey:(CFStringRef)arg1 value:(void*)arg2 ;
-(char)handleErrorReply:(id)arg1 fromMessageSettingKey:(CFStringRef)arg2 toValue:(void*)arg3 retryCount:(int)arg4 retryContinuation:(/*^block*/id)arg5 ;
-(void)goVolatileAfterTryingToWriteKey:(CFStringRef)arg1 value:(void*)arg2 ;
-(void)goReadOnlyAfterTryingToWriteKey:(CFStringRef)arg1 value:(void*)arg2 ;
-(char)attachAccessTokenToMessage:(id)arg1 accessType:(int)arg2 ;
-(void)sendFullyPreparedMessage:(id)arg1 settingValue:(void*)arg2 forKey:(CFStringRef)arg3 retryCount:(int)arg4 ;
-(id)createSynchronizeMessage;
-(void)addPIDImpersonationIfNecessary:(id)arg1 ;
-(id)createRequestNewContentMessageForDaemon:(char)arg1 ;
-(void)sendRequestNewDataMessage:(id)arg1 toConnection:(id)arg2 retryCount:(int)arg3 error:(char*)arg4 ;
-(char)volatilizeIfInvalidHomeDir;
-(char)handleErrorReply:(id)arg1 retryCount:(int)arg2 retryContinuation:(/*^block*/id)arg3 ;
-(void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(char*)arg5 ;
-(void)_sharedCleanup;
-(char)isByHost;
-(id)initWithDomain:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(char)arg3 containerPath:(CFStringRef)arg4 ;
-(void)setAccessRestricted:(char)arg1 ;
-(void)setDaemonCacheEnabled:(char)arg1 ;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(void)mergeIntoDictionary:(CFDictionaryRef)arg1 ;
-(void*)copyValueForKey:(CFStringRef)arg1 ;
-(void)alreadylocked_setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(char)alreadylocked_requestNewData;
-(long)alreadylocked_generationCount;
-(void)dealloc;
-(id)description;
-(char)synchronize;
-(CFStringRef)container;
-(void)setContainer:(CFStringRef)arg1 ;
-(long)generationCount;
-(CFStringRef)domainIdentifier;
-(void)finalize;
-(void)setDomainIdentifier:(CFStringRef)arg1 ;
-(void)setUserIdentifier:(CFStringRef)arg1 ;
@end

