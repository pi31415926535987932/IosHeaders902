/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:28:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMapTable, NSString;

@interface FBSystemGestureManager : NSObject <UIGestureRecognizerDelegate> {

	NSMapTable* _displayToManagerMap;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_defaultsDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)addGestureRecognizer:(id)arg1 toDisplay:(id)arg2 ;
-(void)removeGestureRecognizer:(id)arg1 fromDisplay:(id)arg2 ;
@end

