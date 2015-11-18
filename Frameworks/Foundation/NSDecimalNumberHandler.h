/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:56 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSDecimalNumberBehaviors.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface NSDecimalNumberHandler : NSObject <NSDecimalNumberBehaviors, NSCoding> {

	unsigned _scale : 16;
	unsigned _roundingMode : 3;
	unsigned _raiseOnExactness : 1;
	unsigned _raiseOnOverflow : 1;
	unsigned _raiseOnUnderflow : 1;
	unsigned _raiseOnDivideByZero : 1;
	unsigned _unused : 9;
	void* _reserved2;
	void* _reserved;

}
+(id)defaultDecimalNumberHandler;
+(id)decimalNumberHandlerWithRoundingMode:(unsigned)arg1 scale:(short)arg2 raiseOnExactness:(char)arg3 raiseOnOverflow:(char)arg4 raiseOnUnderflow:(char)arg5 raiseOnDivideByZero:(char)arg6 ;
-(unsigned)roundingMode;
-(id)initWithRoundingMode:(unsigned)arg1 scale:(short)arg2 raiseOnExactness:(char)arg3 raiseOnOverflow:(char)arg4 raiseOnUnderflow:(char)arg5 raiseOnDivideByZero:(char)arg6 ;
-(id)exceptionDuringOperation:(SEL)arg1 error:(unsigned)arg2 leftOperand:(id)arg3 rightOperand:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(short)scale;
@end

