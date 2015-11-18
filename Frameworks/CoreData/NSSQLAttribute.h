/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLColumn.h>

@interface NSSQLAttribute : NSSQLColumn {

	char _unique;
	char _constrained;

}

@property (assign,getter=isConstrained,nonatomic) char constrained;              //@synthesize constrained=_constrained - In the implementation block
-(char)isConstrained;
-(id)attributeDescription;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(unsigned)_sqlTypeForAttributeType:(unsigned)arg1 flags:(unsigned)arg2 ;
-(id)initForReadOnlyFetchWithExpression:(id)arg1 ;
-(char)shouldIndex;
-(void)setConstrained:(char)arg1 ;
-(char)isUnique;
@end

