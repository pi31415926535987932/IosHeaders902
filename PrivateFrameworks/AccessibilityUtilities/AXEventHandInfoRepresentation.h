/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface AXEventHandInfoRepresentation : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _systemGesturePossible;
	unsigned char _swipe;
	unsigned short _initialFingerCount;
	unsigned short _currentFingerCount;
	unsigned _eventType;
	NSArray* _paths;
	unsigned _handIdentity;
	unsigned _handIndex;
	unsigned _handEventMask;
	CGPoint _handPosition;

}

@property (assign,nonatomic) unsigned eventType;                               //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) unsigned short initialFingerCount;                //@synthesize initialFingerCount=_initialFingerCount - In the implementation block
@property (assign,nonatomic) unsigned short currentFingerCount;                //@synthesize currentFingerCount=_currentFingerCount - In the implementation block
@property (nonatomic,retain) NSArray * paths;                                  //@synthesize paths=_paths - In the implementation block
@property (assign,nonatomic) unsigned char systemGesturePossible;              //@synthesize systemGesturePossible=_systemGesturePossible - In the implementation block
@property (assign,nonatomic) unsigned handIdentity;                            //@synthesize handIdentity=_handIdentity - In the implementation block
@property (assign,nonatomic) unsigned handIndex;                               //@synthesize handIndex=_handIndex - In the implementation block
@property (assign,nonatomic) CGPoint handPosition;                             //@synthesize handPosition=_handPosition - In the implementation block
@property (assign,nonatomic) unsigned handEventMask;                           //@synthesize handEventMask=_handEventMask - In the implementation block
@property (assign,nonatomic) unsigned char swipe;                              //@synthesize swipe=_swipe - In the implementation block
+(char)supportsSecureCoding;
+(id)representationWithHandInfo:(SCD_Struct_AX12*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_tabularDescription;
-(void)setInitialFingerCount:(unsigned short)arg1 ;
-(void)setCurrentFingerCount:(unsigned short)arg1 ;
-(void)setSwipe:(unsigned char)arg1 ;
-(void)setSystemGesturePossible:(unsigned char)arg1 ;
-(unsigned short)initialFingerCount;
-(unsigned short)currentFingerCount;
-(unsigned char)swipe;
-(unsigned char)systemGesturePossible;
-(unsigned)handIdentity;
-(void)setHandIdentity:(unsigned)arg1 ;
-(CGPoint)handPosition;
-(void)setHandPosition:(CGPoint)arg1 ;
-(unsigned)handIndex;
-(void)setHandIndex:(unsigned)arg1 ;
-(unsigned)handEventMask;
-(void)setHandEventMask:(unsigned)arg1 ;
-(void)writeToHandInfo:(SCD_Struct_AX12*)arg1 ;
-(NSArray *)paths;
-(void)setPaths:(NSArray *)arg1 ;
-(void)setEventType:(unsigned)arg1 ;
-(unsigned)eventType;
@end

