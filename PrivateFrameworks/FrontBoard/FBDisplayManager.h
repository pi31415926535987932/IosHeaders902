/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable, NSMapTable, NSMutableSet, FBSDisplay;

@interface FBDisplayManager : NSObject {

	NSHashTable* _observers;
	NSMapTable* _displayIDToFBSDisplayMap;
	NSMutableSet* _displaysDebouncing;
	FBSDisplay* _mainDisplay;

}

@property (nonatomic,retain) FBSDisplay * mainDisplay;              //@synthesize mainDisplay=_mainDisplay - In the implementation block
+(id)sharedInstance;
+(id)mainDisplay;
-(id)init;
-(id)description;
-(void)addObserver:(id)arg1 ;
-(FBSDisplay *)mainDisplay;
-(id)displays;
-(void)removeObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_initializeDisplays;
-(char)_caDisplayIsMainDisplay:(id)arg1 ;
-(void)_caDisplayDidConnect:(id)arg1 debounce:(char)arg2 broadcast:(char)arg3 ;
-(id)_fbsDisplayForCADisplay:(id)arg1 ;
-(void)setMainDisplay:(FBSDisplay *)arg1 ;
-(void)_broadcastFBSDisplayDidConnect:(id)arg1 ;
-(void)_debounceDisplay:(id)arg1 broadcast:(char)arg2 ;
-(void)_displayDidDebounce:(id)arg1 broadcast:(char)arg2 ;
-(void)_caDisplayDidDisconnect:(id)arg1 ;
@end

