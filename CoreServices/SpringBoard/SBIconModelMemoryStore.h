/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBIconModelStore.h>

@class NSDictionary, NSString;

@interface SBIconModelMemoryStore : NSObject <SBIconModelStore> {

	NSDictionary* _currentState;
	NSDictionary* _desiredState;

}

@property (nonatomic,retain) NSDictionary * currentState;              //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain) NSDictionary * desiredState;              //@synthesize desiredState=_desiredState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loadDesiredIconState:(id*)arg1 ;
-(id)loadCurrentIconState:(id*)arg1 ;
-(char)deleteDesiredIconState:(id*)arg1 ;
-(char)deleteCurrentIconState:(id*)arg1 ;
-(char)saveDesiredIconState:(id)arg1 error:(id*)arg2 ;
-(char)saveCurrentIconState:(id)arg1 error:(id*)arg2 ;
-(id)initWithCurrentState:(id)arg1 desiredState:(id)arg2 ;
-(void)setDesiredState:(NSDictionary *)arg1 ;
-(NSDictionary *)desiredState;
-(void)dealloc;
-(NSDictionary *)currentState;
-(void)setCurrentState:(NSDictionary *)arg1 ;
@end

