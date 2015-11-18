/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVAssetClientURLRequestHelper, NSObject, AVWeakReference, NSMutableDictionary;

@interface AVAssetResourceLoaderInternal : NSObject {

	AVAssetClientURLRequestHelper* URLRequestHelper;
	NSObject*<OS_dispatch_queue> stateQueue;
	AVWeakReference* weakReferenceToDelegate;
	NSObject*<OS_dispatch_queue> delegateQueue;
	int loadingCancelled;
	NSMutableDictionary* pendingRequests;
	NSObject*<OS_dispatch_queue> contentInformationCachingQueue;
	NSMutableDictionary* contentInformationCache;
	char preloadsEligibleContentKeys;

}
@end

