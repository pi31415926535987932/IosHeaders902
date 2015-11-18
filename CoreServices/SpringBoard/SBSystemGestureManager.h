/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSDisplay, NSMutableDictionary, NSMutableSet, NSString;

@interface SBSystemGestureManager : NSObject <BSDescriptionProviding> {

	FBSDisplay* _display;
	NSMutableDictionary* _typeToGesture;
	NSMutableDictionary* _typeToState;
	NSMutableSet* _recognizingGestures;
	char _systemGesturesDisabledForAccessibility;

}

@property (getter=isAnyGestureRunning,nonatomic,readonly) char anyGestureRunning; 
@property (nonatomic,retain,readonly) FBSDisplay * display; 
@property (assign,getter=areSystemGesturesDisabledForAccessibility,nonatomic) char systemGesturesDisabledForAccessibility;              //@synthesize systemGesturesDisabledForAccessibility=_systemGesturesDisabledForAccessibility - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mainDisplayManager;
-(void)updateUserPreferences;
-(char)isAnyGestureRunning;
-(char)areSystemGesturesDisabledForAccessibility;
-(void)setSystemGesturesDisabledForAccessibility:(char)arg1 ;
-(void)addGestureRecognizer:(id)arg1 withType:(unsigned)arg2 ;
-(char)isGestureWithTypeAllowed:(unsigned)arg1 ;
-(void)_updateUserPreferences;
-(char)_isGestureWithTypeAllowed:(unsigned)arg1 ;
-(char)_shouldEnableSystemGestureWithType:(unsigned)arg1 ;
-(void)_disableSystemGesture:(id)arg1 withType:(unsigned)arg2 ;
-(void)_enableSystemGesture:(id)arg1 withType:(unsigned)arg2 ;
-(void)_systemGestureChanged:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)removeGestureRecognizer:(id)arg1 ;
-(FBSDisplay *)display;
-(id)initWithDisplay:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

