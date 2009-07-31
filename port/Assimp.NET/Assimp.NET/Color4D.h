#pragma once

using namespace System;

namespace AssimpNET
{

	public ref class Color4D
	{
	public:
		Color4D(void);
		Color4D (const Color4D^ other);
 		Color4D (float _r, float _g, float _b, float _a);

		bool IsBlack ();
		bool operator!= (const Color4D^ other);
		bool operator== (const Color4D^ other);
		float operator[] (unsigned int i);


		property float Red
		{
			float get(){throw gcnew System::NotImplementedException();}
			void set(float value){throw gcnew System::NotImplementedException();}
		}

		property float Green
		{
			float get(){throw gcnew System::NotImplementedException();}
			void set(float value){throw gcnew System::NotImplementedException();}
		}

		property float Blue
		{
			float get(){throw gcnew System::NotImplementedException();}
			void set(float value){throw gcnew System::NotImplementedException();}
		}

		property float Alpha
		{
			float get(){throw gcnew System::NotImplementedException();}
			void set(float value){throw gcnew System::NotImplementedException();}
		}


	};

}//namespace