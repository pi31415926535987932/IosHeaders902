/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:53 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKConstraint.h>

@class SKRange;

@interface SKSizeConstraint : SKConstraint {

	SKRange* _widthRange;
	SKRange* _heightRange;

}

@property (copy) SKRange * widthRange;               //@synthesize widthRange=_widthRange - In the implementation block
@property (copy) SKRange * heightRange;              //@synthesize heightRange=_heightRange - In the implementation block
+(id)constraintWithWidthRange:(id)arg1 ;
+(id)constraintWithHeightRange:(id)arg1 ;
+(id)constraintWithWidthRange:(id)arg1 heightRange:(id)arg2 ;
-(SKRange *)widthRange;
-(SKRange *)heightRange;
-(void)setWidthRange:(SKRange *)arg1 ;
-(void)setHeightRange:(SKRange *)arg1 ;
-(id)initWithWidthRange:(id)arg1 heightRange:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

