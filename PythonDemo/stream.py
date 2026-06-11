import streamlit as st


st.title("Hello World")

number = st.text_input("Enter Number")
if st.button("Clickme"):
    if number:
        st.success(f"You entered: {number}")
    else:
        st.warning("Please enter a number.")
    st.balloons()

st.success("Welcome")