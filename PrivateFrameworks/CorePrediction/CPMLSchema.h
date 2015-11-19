/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableString;

@interface CPMLSchema : NSObject {

	NSMutableArray* schema;
	NSMutableString* schemaHeader;
	NSMutableString* schemaHeaderWithType;
	NSMutableArray* attribute;
	NSMutableArray* schemaHDef;
	NSMutableArray* nsRemapTable;
	NSMutableArray* _categoricalDataList;
	NSMutableArray* _replaceMissingValue;
	NSMutableArray* _matchReplaceValue;
	int yColumnPosition;
	NSMutableArray* availableOptions;
	NSMutableArray* _indexColumnList;

}

@property (nonatomic,readonly) NSMutableArray * attribute; 
@property (nonatomic,readonly) NSMutableArray * indexColumnList;                    //@synthesize indexColumnList=_indexColumnList - In the implementation block
@property (nonatomic,readonly) NSMutableString * schemaHeader; 
@property (nonatomic,readonly) NSMutableString * schemaHeaderWithType; 
@property (nonatomic,readonly) NSMutableArray * nsRemapTable; 
@property (nonatomic,readonly) NSMutableArray * availableOptions; 
-(NSMutableArray *)attribute;
-(id)init:(id)arg1 ;
-(id)initWithPlist:(id)arg1 ;
-(NSMutableArray *)availableOptions;
-(unsigned)getTotalAttributes;
-(id)getUserDefinedCategoricalData:(unsigned)arg1 ;
-(int)getYColumnPosition;
-(int)getSchemaType:(unsigned)arg1 ;
-(id)getColumnName:(unsigned)arg1 ;
-(int)getVectorContent:(unsigned)arg1 ;
-(NSMutableString *)schemaHeaderWithType;
-(NSMutableArray *)indexColumnList;
-(char)matchSubstituteValue:(unsigned)arg1 theValue:(id)arg2 ;
-(id)getSubstituteValue:(unsigned)arg1 ;
-(char)isStringType:(unsigned)arg1 ;
-(char)isVectorType:(unsigned)arg1 ;
-(int)getColumnPosition:(id)arg1 ;
-(char)isRealType:(unsigned)arg1 ;
-(char)isIntType:(unsigned)arg1 ;
-(NSMutableArray *)nsRemapTable;
-(unsigned long long)getUserDefinedCategoricalDataCount:(unsigned)arg1 ;
-(char)isColumnContinous:(unsigned long)arg1 ;
-(char)isNumType:(unsigned)arg1 ;
-(char)hasOptions:(unsigned)arg1 ;
-(NSMutableString *)schemaHeader;
@end

