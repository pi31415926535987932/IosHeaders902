/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TIKeyboardLayoutFactory : NSObject {

	void* _layoutsLibraryHandle;
	NSMutableDictionary* _internalCache;

}

@property (nonatomic,readonly) void* layoutsLibraryHandle;              //@synthesize layoutsLibraryHandle=_layoutsLibraryHandle - In the implementation block
@property (retain) NSMutableDictionary * internalCache;                 //@synthesize internalCache=_internalCache - In the implementation block
+(id)sharedKeyboardFactory;
+(id)layoutsFileName;
-(void)dealloc;
-(id)init;
-(id)keyboardWithName:(id)arg1 inCache:(id)arg2 ;
-(id)keyboardPrefixForWidth:(float)arg1 andEdge:(char)arg2 ;
-(void)setInternalCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)internalCache;
-(void*)layoutsLibraryHandle;
@end
