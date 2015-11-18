/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVKVONotifier.h>

@class AVCallbackContextRegistry, NSObject, NSString;

@interface AVClientBlockKVONotifier : NSObject <AVKVONotifier> {

	AVCallbackContextRegistry* _callbackContextRegistry;
	void* _callbackContextToken;
	NSObject* _observer;
	NSObject* _object;
	NSString* _keyPath;
	unsigned _options;
	/*^block*/id _block;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelCallbacks;
-(id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned)arg5 block:(/*^block*/id)arg6 ;
-(void)callbackDidFireWithChangeDictionary:(id)arg1 ;
-(void)dealloc;
-(void)start;
-(void)finalize;
@end

